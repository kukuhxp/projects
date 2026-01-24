# THREAD

Thread of execution (Thread) adalah jalur eksekusi terkecil di dalam sebuah program. Thread bisa berjalan secara bersamaan dengan thread lain di dalam satu program.

## Analogy

Bayangkan kamu punya restoran, satu program adalah restoran itu sendiri, sedangkan satu thread adalah satu koki yang memasak. Beberapa thread adalah beberapa koki yang bisa masak menu berbeda secara bersamaan.

Kalau cuma satu koki (single thread), pelanggan harus nunggu satu per satu. Kalau ada banyak koki (multi-thread), masakan bisa disiapkan lebih cepat secara paralel.

## Example

### 1. Single-thread

```
console.log("1");
console.log("2");
console.log("3");

// The output is always in order:
1
2
3
```

### 2. Multi-thread

Misalnya kamu punya dua thread:

Thread A: cetak angka
Thread B: cetak huruf

Mereka bisa berjalan bersamaan, hasilnya bisa muncul bergantian secara acak:

```
1
A
2
B
3
C
```

Artinya, dua pekerjaan bisa dikerjakan secara paralel, bukan bergantian.

## Thread and JavaScript

JavaScript sendiri di browser adalah single-threaded, tapi kita bisa membuat thread tambahan dengan menggunakan **Web Workers**.

Web Workers inilah yang memungkinkan JavaScript melakukan tugas berat tanpa membekukan tampilan.

Contoh:

`const worker = new Worker("worker.js");`

Ini membuat thread baru untuk menjalankan kode di worker.js secara terpisah dari thread utama.

## Thread and Atomics

Ketika beberapa thread berbagi data, bisa terjadi **race condition**. Dua thread menulis data di waktu bersamaan, nilai akhirnya jadi salah atau tidak konsisten. Nah, Atomics digunakan agar operasi baca/tulis ke shared memory itu aman dan sinkron, jadi hasilnya tetap benar.