# BOOTSTRAPING

Bootstrapping berarti proses awal untuk memulai sistem atau program dari kondisi nol hingga bisa berjalan sepenuhnya. Secara sederhana, bootstrapping adalah tahap menghidupkan sistem dari sesuatu yang sangat sederhana, yaitu kode awal kecil yang kemudian memuat bagian-bagian yang lebih kompleks.

## How It Works?

1. Ketika sebuah program atau sistem komputer dijalankan ada kode kecil yang sudah tertanam seperti firmware atau ROM.
2. Kode kecil ini disebut bootstrap code atau bootloader.
3. Tugasnya: memuat kode program yang lebih besar seperti kernel OS ke dalam memori.
4. Setelah itu, sistem bisa menjalankan program utama sepenuhnya.

## Example

### 1. In Operating System

Saat kamu menyalakan komputer, BIOS/UEFI menjalankan bootstrap loader. Loader ini memuat kernel OS dari disk ke RAM, lalu kernel mulai berjalan dan kemudian sistem aktif.

### 2. In Programming Language

Beberapa compiler meng-bootstrapping dirinya sendiri, seperti compiler C awalnya ditulis dalam assembly. Setelah C bisa berjalan, compiler C versi baru ditulis ulang dalam bahasa C itu sendiri. Proses membuat compiler dengan dirinya sendiri disebut self-hosting atau compiler bootstrapping.

### 3. In Web Framework

Dalam framework seperti Angular atau React, istilah bootstrapping juga dipakai untuk menggambarkan tahap inisialisasi aplikasi, yaitu saat modul utama di-load dan aplikasi dijalankan di browser.