# Event Capturing & Bubbling

Ketika kamu melakukan sesuatu seperti klik pada elemen HTML, misalnya tombol di dalam <div>, event itu tidak berhenti di tombol, ia akan mengalir melalui beberapa lapisan elemen di halaman.

Nah, alur pergerakan event inilah yang disebut Event Capturing (fase turun) dan Event Bubbling (fase naik)

## Event Phase

Secara default, event di DOM berjalan melalui 3 fase:

1. Capturing Phase, dari document turun ke elemen target
2. Target Phase, event terjadi di elemen target seperti tombol atau link.
3. Bubbling Phase, dari elemen target naik lagi ke document


## Example

```
// HTML
<div id="parent">
  <button id="child">Klik aku</button>
</div>

// JS
const parent = document.getElementById("parent");
const child = document.getElementById("child");

parent.addEventListener("click", () => console.log("Parent (capture)"), true);
child.addEventListener("click", () => console.log("Child (target)"));
parent.addEventListener("click", () => console.log("Parent (bubble)"));
```

## Output

Parent (capture)  ← Capturing Phase

Child             ← Target Phase

Parent (bubble)   ← Bubbling Phase