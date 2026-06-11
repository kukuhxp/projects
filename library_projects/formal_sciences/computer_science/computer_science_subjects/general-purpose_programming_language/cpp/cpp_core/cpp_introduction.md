# C/C++ INTRODUCTION

## How It Works

Berikut adalah alur lengkap bagaimana program C++ dijalankan, dari kode sumber hingga hasil akhir, dijelaskan step by step. Saya buat sekalian membandingkan peran compiler dan runtime.

### 1. Writing The Source Code

Example:

```
// tes.cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    cout << "Hello C++! x = " << x << endl;
    return 0;
}
```

### 2. Preprocessing

2.1. Compiler menjalankan preprocessor.

2.2. Menghapus komentar `// atau /* */`.

2.3. Memproses direktif `#include, #define`.

2.4 Menyisipkan file header `iostream`.

2.5. Menghasilkan kode sumber untuk dikompilasi

### 3. Compile Time

Compiler menerjemahkan kode sumber preprocessed menjadi assembly/machine code. Pada tahap ini, program masih belum executable. Hanya object code.


3.1. Lexing & Parsing → membuat token & AST.

3.2. Semantic Analysis → cek tipe data, scope, dll.

3.3. Optimization → constant folding, loop unrolling, dead code elimination.

3.4. Code Generation menghasilkan object file seperti .o / .obj.


### 4. Linking

Linker menggabungkan object files hasil kompilasi dan library, hasilnya adalah executable file (.exe atau lainnya). Pada tahap ini, semua simbol fungsi dan variabel sudah terhubung.


### 5. Loading by OS

Saat program executable dijalankan, sistem operasi memuat executable ke memori, lalu menyiapkan stack dan heap, kemudian menyelesaikan dynamic linking. Setelah itu sistem operasi akan memanggil entry point `(_start)` yang mempersiapkan environment untuk `main()`.

### 6. Run Time

6.1. Global/static constructors dijalankan.

6.2. Fungsi `main()` dipanggil.

6.3. Kode dijalankan instruksi demi instruksi oleh CPU.

6.4. Standard library seperti I/O dan memory management dijalankan.

6.5. Exception handling dijalankan jika ada error.

6.6. Thread library dijalankan jika program multi-threaded.


### 7. Finishing

7.1. Fungsi `main()` selesai dipanggil, return value dikirim ke OS.

7.2. OS membersihkan memory stack/heap yang digunakan program.

7.3. Program berhenti, CPU kembali ke OS.