# ATOMICS

Atomics adalah objek global bawaan JavaScript yang menyediakan operasi atomik pada data yang disimpan dalam SharedArrayBuffer.

Operasi atomik artinya operasi yang tidak bisa diinterupsi, dengan kata lain, ketika dua atau lebih thread mencoba membaca/menulis data yang sama, Atomics memastikan bahwa operasi tersebut terjadi sepenuhnya satu per satu tanpa saling bertabrakan.

## Kapan Atomics Digunakan?

Biasanya digunakan bersama dengan SharedArrayBuffer untuk berbagi data antar Web Workers (thread paralel), sinkronisasi data antar thread, dan menghindari kondisi balapan.

Example:

```
// Buat buffer yang bisa dibagi antar worker
const sab = new SharedArrayBuffer(4); // 4 byte = 1 Int32
const view = new Int32Array(sab);

// Set nilai awal
view[0] = 0;

// Operasi atomik menambah nilai
Atomics.add(view, 0, 1); // Tambah 1 ke index 0

console.log(Atomics.load(view, 0)); // Output: 1

Tanpa Atomics, jika dua thread menulis nilai bersamaan, hasil akhirnya bisa tidak konsisten (misalnya dua kali tambah 1 bisa tetap menghasilkan 1).
Dengan Atomics, hasilnya terjamin aman (pasti jadi 2).
```

## Atomics Static Properties

### Atomics[Symbol.toStringTag]

## Atomics Static Methods

### Atomics.edd()

### Atomics.and()

### Atomics.exchange()

### Atomics.load()

### Atomics.notify()