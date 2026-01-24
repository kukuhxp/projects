# CLASS

Class adalah **syntatic sugar** dari **constructor function**.

Example:

```
class Robot {
  constructor(name) {
    this.name = name;
  }
  greet() {
    console.log(`Halo, aku ${this.name}`);
  }
}

const r1 = new Robot("Astra");
r1.greet(); // "Halo, aku Astra"
```

## Synthetic Sugar

Syntactic Sugar adalah cara penulisan kode yang dibuat lebih ringkas, mudah dibaca, dan nyaman bagi programmer, tanpa menambahkan fitur baru ke bahasa itu sendiri.

## First-class Object

First-class object adalah konsep dalam pemrograman di mana fungsi, objek, atau nilai dapat disimpan dalam variabel, dikirim sebagai argumen ke fungsi lain, dikembalikan dari fungsi, dibuat secara dinamis.