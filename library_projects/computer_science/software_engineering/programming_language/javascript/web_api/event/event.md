# EVENT INTERFACE

## Callback Queue

Callback queue adalah bagian dari mekanisme event loop dalam JavaScript yang menyimpan fungsi-fungsi yang siap dijalankan setelah stack utama kosong.

## Inline Event Handler Assignment

Example:

```
object.event = function(e) {
   functionBody;
}

element.evwnt(args); // Invoking
```

## Event Handler

Example:

```
function functionX(e) {
   functionBody;
}

let object;

object.event = functionX; // Assigning
object.event = functionX(args); // Invoking
```

## Event Constructor Function

Example:

```
let object = new Event()

object.property;
object.method();
```
 
## Event Instance Properties

### type

- Status: `Read-only`
- Value: `String`

### target

- Status: `Read-only`
- Value: `String`

### currentTarget

- Status: `Read-only`
- Value: `String`

### key

### code

### clientX

### clientY

## Event Instance Methods

### preventDefault()

### stopPropagation()

Example:

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

child.addEventListener("click", (e) => {
   console.log("Child");
   e.stopPropagation();
});
```