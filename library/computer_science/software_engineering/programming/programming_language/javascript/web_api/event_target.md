# EVENT TARGET INTERFACE

EventTarget adalah objek dasar (interface) di JavaScript yang digunakan oleh semua objek yang bisa menerima dan mengelola event. Jadi, semua objek yang bisa menerima event seperti window, document, atau elemen HTML adalah turunan dari EventTarget.


## Event Target Constructor Function

Example:

```
let object = new EventTarget();

object.property;
object.method();
```

## Event Target Instance Methods

### addEventListener() / EventTarget.addEventListener()

Method yang digunakan untuk menambahkan event dan function pada element node.

Example:

```
EventTarget.addEventListener("event", function(e) {
   functionBody;
});

// Arrow Function Version
EventTarget.addEventListener("event", (e) => {
   functionBody;
});
```

Event:

- onclick (click)
- onkeypress (keypress)

### Callback without Parameters in addEventListener()

Callback pada addEventListener tidak perlu diberi parameter ketika dituliskan, karena browser yang akan memanggil fungsi itu dan otomatis mengirimkan objek event-nya.

Example:

```
function callback() {
   functionBody;
}

EventTarget.addEventListener("event", callback); // Assigning ✅
EventTarget.addEventListener("event", callback(parameters)); // Invoking without event ❌
```

### Callback with Parameters in addEventListener()

Example:

```
function callback(Paramaters) {
   functionBody;
}

EventTarget.addEventListener("event", function(e) {
   functionBody;
   callback(Args);
});
```

### addEventListener() Options

Example:

```
EventTarget.addEventListener("event", function(e) {
   functionBody;
}, {option: boolean});

// Arrow Function Version
EventTarget.addEventListener("event", (e) => {
   functionBody;
}, {option: boolean});
```

#### 1. Once Option

Once adalah sebuah argumen opsional yang digunakan untuk menjalankan function hanya satu kali pada event listener.

Example:

```
EventTarget.addEventListener("event", function(e) {
   functionBody;
}, {once: true});
```

#### 2. Capture Option

Capture adalah sebuah argumen opsional yang digunakan untuk melakukan event capturing.

Example:

```
object.eventListener("event", function(e) {
   functionBody;
}, {capture: true});

// Or like this
object.eventListener("event", function(e) {
   functionBody;
}, true);
```

### removeEventListener() / EventTarget.removeEventListener() 

Method yang digunakan untuk menghilangkan event dan function pada element node.

### dispatchEvent() / EventTarget.dispatchEvent()