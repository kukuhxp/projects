const body = document.body;

function print(tag, txt, attrs = {}) {
    if (!tag) {
        body.append(txt);
        return body;
    }

    const element = document.createElement(tag);
    const text = document.createTextNode(txt);
    element.append(text);
    for (const [key, value] of Object.entries(attrs)) {
        if (key.startsWith("on") && typeof value === "function") {
            element.addEventListener(key.slice(2), value);
        } else {
            element.setAttribute(key, value);
        }
    }
    body.append(element);
    return body;
}

function select(selector) {
    return document.querySelector(selector);
}
  
function br(times = 1) {
        const frag = document.createDocumentFragment();
        for (let i = 0; i < times; i++) {
            frag.appendChild(document.createElement("br"));
        }
        body.append(frag);
        return body;
    }

function hr() {
    body.append(document.createElement("hr"));
    return body;
}