# GLOBAL EXECUTION CONTEXT (GEC

Global Execution Context (GEC) adalah lingkungan eksekusi utama yang secara otomatis dibuat oleh JavaScript saat pertama kali program dijalankan. Semua kode JavaScript yang tidak berada di dalam fungsi akan dieksekusi di dalam konteks ini.

Execution context adalah tempat di mana JavaScript mengeksekusi kode dan mengelola variabel, fungsi, dan scope. Global Execution Context adalah context pertama dan tertinggi yang dibuat oleh JavaScript engine.

## Proses pembentukan Global Execution Context

Ketika file JavaScript dijalankan, mesin JavaScript akan membuat Global Execution Context yang terdiri dari dua fase utama:

## 1. Creation Phase

Fase di mana browser membuat objek global bernama window, dan di Node.js bernama global. Selain itu, JavaScript juga membuat objek `this` setara dengan objek `window`.


2. Execution Phase

Fase di mana browser menjalankan baris kode satu per satu, dan mengisi nilai aktual ke variabel, memanggil fungsi, dll.

Example:

```
// When this code is executed, a and greet() are in the Global Execution Context.
var a = 10;
function greet() {
  console.log("Hello");
}

// When greet() is called, a new Function Execution Context is created on top of GEC.
greet();
```

## Execution Stack

Execution context tersusun seperti tumpukan (stack):

Example:

```
| Function EC 2 |
| Function EC 1 |
| Global EC     |
```

Ketika fungsi selesai, context-nya dihapus dari stack, ketika semua selesai, Global Execution Context tetap ada sampai program berakhir.