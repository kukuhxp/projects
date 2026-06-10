// ps2_startup.cpp
// Minimal example: GLFW + GLAD + GLM
// Generates a grid of columns whose heights derive from a "memory_card.bin" file.
// Compile with: g++ ps2_startup.cpp -lglfw -ldl -lGL -pthread -o ps2_startup
// (Make sure GLAD, GLFW, GLM headers are available and linked properly.)

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <vector>
#include <fstream>
#include <iostream>
#include <cmath>
#include <random>

// ---------------- Shader sources ----------------
const char* vertexShaderSrc = R"GLSL(
#version 330 core
layout(location=0) in vec3 aPos;
layout(location=1) in vec3 aNormal;

uniform mat4 uMVP;
uniform mat4 uModel;
uniform mat3 uNormalMat;

out vec3 vPos;
out vec3 vNormal;

void main(){
    vPos = vec3(uModel * vec4(aPos,1.0));
    vNormal = normalize(uNormalMat * aNormal);
    gl_Position = uMVP * vec4(aPos,1.0);
}
)GLSL";

const char* fragmentShaderSrc = R"GLSL(
#version 330 core
in vec3 vPos;
in vec3 vNormal;

out vec4 fragColor;

uniform vec3 uLightPos;
uniform vec3 uViewPos;
uniform vec3 uBaseColor;
uniform float uFogDensity;

void main(){
    // simple lambert
    vec3 L = normalize(uLightPos - vPos);
    float diff = max(dot(vNormal, L), 0.0);
    vec3 diffuse = diff * uBaseColor;

    // ambient
    vec3 ambient = 0.12 * uBaseColor;

    vec3 color = ambient + diffuse;

    // distance-based fog exponential
    float dist = length(uViewPos - vPos);
    float fogFactor = 1.0 - exp(-uFogDensity * dist * dist);
    fogFactor = clamp(fogFactor, 0.0, 1.0);
    vec3 fogColor = vec3(0.02, 0.03, 0.08); // bluish fog

    vec3 finalColor = mix(color, fogColor, fogFactor);

    fragColor = vec4(finalColor, 1.0);
}
)GLSL";

// ---------------- Utilities ----------------
GLuint compileShader(GLenum type, const char* src){
    GLuint s = glCreateShader(type);
    glShaderSource(s, 1, &src, nullptr);
    glCompileShader(s);
    GLint ok; glGetShaderiv(s, GL_COMPILE_STATUS, &ok);
    if(!ok){
        char buf[1024]; glGetShaderInfoLog(s,1024,nullptr,buf);
        std::cerr<<"Shader compile error: "<<buf<<"\n";
    }
    return s;
}

GLuint linkProgram(GLuint v, GLuint f){
    GLuint p = glCreateProgram();
    glAttachShader(p,v); glAttachShader(p,f);
    glLinkProgram(p);
    GLint ok; glGetProgramiv(p, GL_LINK_STATUS, &ok);
    if(!ok){
        char buf[1024]; glGetProgramInfoLog(p,1024,nullptr,buf);
        std::cerr<<"Program link error: "<<buf<<"\n";
    }
    return p;
}

// ---------------- Geometry: build a unit cube (centered at origin) scaled per pillar ----------------
struct Mesh {
    std::vector<float> vertices; // pos(3) normal(3)
    std::vector<unsigned int> indices;
};

Mesh buildCube(){
    Mesh m;
    // 8 positions
    glm::vec3 p[8] = {
        {-0.5f,-0.5f,-0.5f},{0.5f,-0.5f,-0.5f},{0.5f,0.5f,-0.5f},{-0.5f,0.5f,-0.5f},
        {-0.5f,-0.5f,0.5f}, {0.5f,-0.5f,0.5f}, {0.5f,0.5f,0.5f},  {-0.5f,0.5f,0.5f}
    };
    glm::vec3 normals[6] = {
        {0,0,-1},{0,0,1},{0,-1,0},{0,1,0},{-1,0,0},{1,0,0}
    };
    // faces (pos idx)
    unsigned int faceIdx[6][4] = {
        {0,1,2,3},{4,5,6,7},{0,1,5,4},{3,2,6,7},{0,3,7,4},{1,2,6,5}
    };
    for(int f=0;f<6;++f){
        glm::vec3 n = normals[f];
        unsigned int *fi = faceIdx[f];
        // two triangles per face
        unsigned int idx0 = (unsigned int)m.vertices.size()/6;
        for(int k=0;k<4;k++){
            glm::vec3 pos = p[fi[k]];
            // push pos and normal
            m.vertices.push_back(pos.x);
            m.vertices.push_back(pos.y);
            m.vertices.push_back(pos.z);
            m.vertices.push_back(n.x);
            m.vertices.push_back(n.y);
            m.vertices.push_back(n.z);
        }
        m.indices.push_back(idx0+0); m.indices.push_back(idx0+1); m.indices.push_back(idx0+2);
        m.indices.push_back(idx0+0); m.indices.push_back(idx0+2); m.indices.push_back(idx0+3);
    }
    return m;
}

// ---------------- Memory card loader ----------------
std::vector<uint8_t> loadMemoryCardData(const std::string& path){
    std::ifstream ifs(path, std::ios::binary);
    std::vector<uint8_t> data;
    if(!ifs) return data;
    ifs.seekg(0, std::ios::end);
    size_t size = ifs.tellg();
    ifs.seekg(0);
    data.resize(size);
    ifs.read((char*)data.data(), size);
    return data;
}

// ---------------- Main ----------------
int main(){
    if(!glfwInit()){
        std::cerr<<"Failed to init GLFW\n"; return -1;
    }
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR,3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    GLFWwindow* win = glfwCreateWindow(1280,720,"PS2 Startup Demo (Procedural)", nullptr, nullptr);
    if(!win){ std::cerr<<"Window fail\n"; glfwTerminate(); return -1; }
    glfwMakeContextCurrent(win);
    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        std::cerr<<"Failed GLAD\n"; return -1;
    }
    glEnable(GL_DEPTH_TEST);

    // shaders
    GLuint vs = compileShader(GL_VERTEX_SHADER, vertexShaderSrc);
    GLuint fs = compileShader(GL_FRAGMENT_SHADER, fragmentShaderSrc);
    GLuint prog = linkProgram(vs, fs);
    glDeleteShader(vs); glDeleteShader(fs);

    // cube mesh
    Mesh cube = buildCube();
    GLuint vao, vbo, ebo;
    glGenVertexArrays(1,&vao);
    glGenBuffers(1,&vbo);
    glGenBuffers(1,&ebo);

    glBindVertexArray(vao);
    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glBufferData(GL_ARRAY_BUFFER, cube.vertices.size()*sizeof(float), cube.vertices.data(), GL_STATIC_DRAW);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, cube.indices.size()*sizeof(unsigned int), cube.indices.data(), GL_STATIC_DRAW);

    // pos(3) normal(3)
    glVertexAttribPointer(0,3,GL_FLOAT,GL_FALSE,6*sizeof(float),(void*)(0));
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(1,3,GL_FLOAT,GL_FALSE,6*sizeof(float),(void*)(3*sizeof(float)));
    glEnableVertexAttribArray(1);

    glBindVertexArray(0);

    // grid params
    const int GRID_W = 32;
    const int GRID_H = 24;
    const float SPACING = 1.2f;
    const float MIN_H = 0.05f;
    const float MAX_H = 6.0f;

    // load memory data if exists
    std::vector<uint8_t> mem = loadMemoryCardData("memory_card.bin");
    std::vector<float> heights(GRID_W * GRID_H, MIN_H);
    if(!mem.empty()){
        // map bytes into grid (repeat if shorter)
        size_t idx = 0;
        for(int y=0;y<GRID_H;y++){
            for(int x=0;x<GRID_W;x++){
                uint8_t b = mem[idx % mem.size()];
                float t = float(b) / 255.0f;
                float h = MIN_H + t * (MAX_H - MIN_H);
                heights[y*GRID_W + x] = h;
                idx++;
            }
        }
        std::cout<<"Loaded memory_card.bin ("<<mem.size()<<" bytes)\n";
    } else {
        // fallback deterministic random (seeded) so it looks consistent
        std::mt19937 rng(1337);
        std::uniform_real_distribution<float> d(0.0f,1.0f);
        for(int i=0;i<GRID_W*GRID_H;i++){
            float t = d(rng);
            heights[i] = MIN_H + t*(MAX_H - MIN_H);
        }
        std::cout<<"No memory_card.bin found — using pseudo-random heights\n";
    }

    // precompute model matrices
    struct Instance { glm::mat4 model; float height; glm::vec3 pos; };
    std::vector<Instance> instances;
    instances.reserve(GRID_W*GRID_H);
    for(int y=0;y<GRID_H;y++){
        for(int x=0;x<GRID_W;x++){
            float hh = heights[y*GRID_W + x];
            glm::vec3 pos = glm::vec3(
                (x - GRID_W/2) * SPACING,
                hh * 0.5f, // because cube centered at origin
                (y - GRID_H/2) * SPACING
            );
            glm::mat4 M = glm::translate(glm::mat4(1.0f), pos);
            M = glm::scale(M, glm::vec3(0.9f, hh, 0.9f)); // pillar width slightly less than spacing
            instances.push_back({M, hh, pos});
        }
    }

    // camera path parameters (flying forward toward center)
    float tstart = (float)glfwGetTime();
    float totalDuration = 6.0f; // seconds for the camera fly-through
    // we will animate camera from far z toward center and then into a bright room (simulate)
    // view/proj uniforms
    GLint loc_uMVP = glGetUniformLocation(prog, "uMVP");
    GLint loc_uModel = glGetUniformLocation(prog, "uModel");
    GLint loc_uNormalMat = glGetUniformLocation(prog, "uNormalMat");
    GLint loc_uLightPos = glGetUniformLocation(prog, "uLightPos");
    GLint loc_uViewPos = glGetUniformLocation(prog, "uViewPos");
    GLint loc_uBaseColor = glGetUniformLocation(prog, "uBaseColor");
    GLint loc_uFogDensity = glGetUniformLocation(prog, "uFogDensity");

    // initial GL state
    glClearColor(0.01f,0.01f,0.02f,1.0f);

    // main loop
    while(!glfwWindowShouldClose(win)){
        float now = (float)glfwGetTime();
        float tt = (now - tstart) / totalDuration;
        if(tt > 1.0f) tt = 1.0f; // end at final pose

        // camera: start far away and move forward + slight bob
        glm::vec3 camStart = glm::vec3(0.0f, 6.0f, 90.0f);
        glm::vec3 camEnd   = glm::vec3(0.0f, 3.2f, 8.0f);
        // ease in-out cubic
        auto ease = [](float x){ return x<0.5f ? 4*x*x*x : 1.0f - pow(-2*x+2,3)/2.0f; };
        float e = ease(tt);
        glm::vec3 camPos = camStart * (1.0f - e) + camEnd * e;
        camPos.x += sin(now*0.9f) * (1.0f - e) * 2.0f;
        camPos.y += sin(now*1.3f) * 0.25f;

        glm::vec3 target = glm::vec3(0.0f, 1.6f, 0.0f);
        glm::mat4 view = glm::lookAt(camPos, target, glm::vec3(0,1,0));

        int w,h;
        glfwGetFramebufferSize(win, &w, &h);
        float aspect = w>0 ? (float)w / (float)h : 1.0f;
        glm::mat4 proj = glm::perspective(glm::radians(55.0f), aspect, 0.1f, 400.0f);

        glViewport(0,0,w,h);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glUseProgram(prog);
        // lighting + fog that change a bit while animating
        glm::vec3 lightPos = glm::vec3(20.0f, 30.0f, 40.0f) * (1.0f - 0.3f*e) + glm::vec3(0.0f,5.0f,0.0f)*e;
        glUniform3f(loc_uLightPos, lightPos.x, lightPos.y, lightPos.z);
        glUniform3f(loc_uViewPos, camPos.x, camPos.y, camPos.z);
        glUniform3f(loc_uBaseColor, 0.18f, 0.22f, 0.9f); // bluish pillars
        float fogDensity = 0.0055f + 0.014f * e; // more fog later
        glUniform1f(loc_uFogDensity, fogDensity);

        // draw each instance
        glBindVertexArray(vao);
        for(const auto& inst : instances){
            glm::mat4 m = inst.model;
            glm::mat4 mvp = proj * view * m;
            glm::mat3 normalMat = glm::transpose(glm::inverse(glm::mat3(m)));
            glUniformMatrix4fv(loc_uMVP, 1, GL_FALSE, &mvp[0][0]);
            glUniformMatrix4fv(loc_uModel, 1, GL_FALSE, &m[0][0]);
            glUniformMatrix3fv(loc_uNormalMat, 1, GL_FALSE, &normalMat[0][0]);
            // distance-based LOD: optionally skip tiny pillars far away (not necessary here)
            glDrawElements(GL_TRIANGLES, (GLsizei)cube.indices.size(), GL_UNSIGNED_INT, 0);
        }

        glBindVertexArray(0);
        glUseProgram(0);

        glfwSwapBuffers(win);
        glfwPollEvents();

        // optionally exit after animation fully played to simulate "enter room"
        if(tt >= 1.0f){
            // hold a bit then exit
            static float doneAt = -1.0f;
            if(doneAt < 0.0f) doneAt = now;
            if(now - doneAt > 2.0f) break;
        }
    }

    // cleanup
    glDeleteBuffers(1,&vbo);
    glDeleteBuffers(1,&ebo);
    glDeleteVertexArrays(1,&vao);
    glDeleteProgram(prog);
    glfwDestroyWindow(win);
    glfwTerminate();
    return 0;
}