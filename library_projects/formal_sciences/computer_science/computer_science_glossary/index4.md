## Intermediate Language

## Profiling

## Hotfix

Hotfix adalah perbaikan cepat terhadap masalah kritis dalam perangkat lunak yang dilakukan segera setelah bug ditemukan, tanpa menunggu rilis besar berikutnya.

## Over-the-air (OTA)

Over-the-air (OTA) adalah metode untuk mendistribusikan data atau pembaruan perangkat lunak ke perangkat secara nirkabel, biasanya melalui koneksi Wi-Fi, seluler, atau bluetooth.

## Symbol Files

Symbol files adalah file yang berisi informasi simbolik tentang kode program seperti nama fungsi, variabel, dan baris kode sumber yang digunakan untuk proses debugging. File ini membantu developer memahami apa yang sedang terjadi dalam program saat dijalankan atau saat terjadi error.

## Patch

Patch adalah perbaikan kecil atau pembaruan pada perangkat lunak yang bertujuan untuk mmperbaiki bug, menutup celah keamanan, meningkatkan performa stabilitas sistem.

## Compiler

Compiler adalah program yang berfungsi untuk menerjemahkan seluruh kode sumber dari bahasa pemrograman tingkat menengah seperti C/C++ menjadi bahasa mesin.

## Decompiler

Decompiler adalah program atau alat yang bertugas melakukan decompiling, yaitu mengubah file bytecode seperti .exe, .dll, .class, .dex menjadi kode sumber tingkat tinggi misalnya C, Java, Python.

Contoh:

```
// Bytecode
55 48 89 E5 48 83 EC 10 ...

// C Code
int add(int a, int b) {
    return a + b;
}
```

## Disassembler

Disassembler adalah sebuah alat yang digunakan untuk mengubah kode mesin menjadi assembly code yang lebih mudah dibaca manusia.

Contoh:

```
// Bytecode
55 48 89 E5


// Assembly Code
push rbp
mov rbp, rsp
```

## Compiling

Compiling adalah proses mengubah seluruh kode sumber menjadi kode mesin atau binari yang bisa dijalankan oleh komputer.

## Decompiling

Decompiling adalah proses mengubah file biner atau bytecode menjadi kode sumber dalam bahasa tingkat tinggi seperti C, Java, atau Python.

## Lexical Analysis

Lexical analysis adalah tahap pertama dalam proses kompilasi atau interpretasi kode program, di mana kode sumber dipecah menjadi bagian-bagian kecil yang disebut token.

## Parsing

Parsing adalah proses di mana kode sumber yang sudah dipecah menjadi token oleh lexical analysis akan dianalisis strukturnya berdasarkan aturan tata bahasa oleh bahasa pemrograman tersebut.

## Linking

Linking adalah proses dalam pengembangan perangkat lunak yang menggabungkan berbagai bagian program seperti kode yang dikompilasi, pustaka/libraries dan dependensi lainnya menjadi satu file executable atau program yang bisa dijalankan.

## Interpreter

Interpreter atau Virtual Machine (VM) adalah program yang berfungsi untuk membaca dan menjalankan kode sumber secara langsung baris per baris, tanpa perlu mengubahnya menjadi kode mesin.

## Bytecode

Bytecode adalah kode perantara antara kode sumber dan kode mesin yang dijalankan langsung oleh virtual machine atau interpreter.

Example:

```
// Java Code
public class Test {
    public static void main(String[] args) {
        System.out.println("Hello");
    }
}

// Java Bytecode
0: getstatic     #2   // Field java/lang/System.out:Ljava/io/PrintStream;
3: ldc           #3   // String Hello
5: invokevirtual #4   // Method java/io/PrintStream.println:(Ljava/lang/String;)V
8: return
```

## Machine Code

Machine code adalah bahasa paling dasar yang bisa dimengerti langsung oleh prosesor. Kode ini terdiri dari angka biner, yang memberi instruksi spesifik ke hardware untuk melakukan tugas seperti menghitung, menyimpan data, atau menampilkan output.

Example:

```
// HEX Machine Code
B8 04 00 00 00
BB 01 00 00 00
B9 00 10 60 00
BA 0D 00 00 00
CD 80
B8 01 00 00 00
31 DB
CD 80

// Binary Machine Code
10111000 00000001 00000000 00000000 00000000
```

## Feature Flag

Feature flag atau feature toggle adalah mekanisme untuk mengaktifkan atau menonaktifkan fitur aplikasi secara dinamis tanpa perlu mengubah atau redeploy kode. Dengan feature flag, developer bisa mengontrol perilaku aplikasi lewat konfigurasi.

Contoh:

Bayangkan kamu punya aplikasi dan sedang mengembangkan fitur Mode Gelap (Dark Mode). Daripada langsung merilis fitur itu ke semua pengguna, kamu bisa menyembunyikannya di balik feature flag.

Jenis:

1. Release Flag
Untuk mengontrol perilisan fitur baru secara bertahap, hanya beberapa pengguna saja yang dapat melihat fitur baru.

2. Experiment Flag
Untuk menguji versi fitur yang berbeda dan melihat hasil performanya.

3. Ops Flag
Untuk mengaktifkan/menonaktifkan komponen penting saat darurat. Contohnya, mematikan sistem pembayaran saat maintenance, agar pengguna tidak mengalami kerugian saat sistem diperbaiki.

4. Permission Flag
Untuk memberi akses fitur tertentu hanya ke user tertentu.

## Bug

Bug adalah kesalahan, cacat, atau kelemahan dalam kode program yang menyebabkan program tidak berjalan sesuai harapan.

## Debugging

Debugging adalah proses mencari, menemukan, dan memperbaiki kesalahan dalam kode program agar program dapat berjalan dengan benar.

## Remote Debugging

Remote debugging adalah proses men-debug yang berjalan di komputer lain dari jarak jauh, biasanya melalui jaringan lokal atau internet.

## Handling Programs

Handling Program adalah cara program menangani situasi atau kondisi tertentu, terutama errors, input tak terduga, atau peristiwa khusus selama program berjalan.

## Syntax

Syntax adalah aturan dan tata cara penulisan kode dalam suatu bahasa pemrograman. Syntax menentukan bagaimana struktur kode harus ditulis agar bisa dimengerti dan dijalankan oleh komputer.

## Variable

Variable adalah tempat untuk menyimpan data dalam program. Kamu bisa membayangkan variabel seperti kotak yang diberi nama, dan di dalam kotak itu kamu bisa menyimpan nilai seperti angka, teks, atau objek.

## Identifier

Identifier adalah nama yang digunakan untuk menamai elemen dalam program, seperti variabel, fungsi, metode, properti, kelas, objek, konstanta.

## Data Types

Data types adalah klasifikasi nilai dalam pemrograman yang menentukan jenis data yang bisa disimpan dan dioperasikan oleh suatu variabel.

## Expression

Expression adalah kombinasi dari nilai, variabel, operator, atau fungsi yang menghasilkan sebuah nilai.

## Statement

Statement adalah instruksi lengkap yang dijalankan oleh program untuk melakukan suatu aksi.

## Class

Class atau kelas adalah cetakan untuk membuat objek. Class mendefinisikan struktur dan perilaku yang dimiliki oleh objek yang dibuat dari class tersebut.

## Object

Object atau oobjek adalah instansi dari sebuah class. Jika class adalah cetakannya, maka object adalah produk jadi dari cetakan itu.

## Constructor

Constructor adalah metode khusus dalam sebuah class yang dipanggil secara otomatis saat object dibuat. Tujuan dari constructor adalah untuk menginisialisasi dari atribut-atribut dalam object.

## Destructor

Destructor adalah metode khusus dalam sebuah class yang akan dipanggil secara otomatis saat sebuah objek dihapus dari memori atau tidak lagi digunakan. Tujuan dari destructor adalah untuk membersihkan resource seperti file, koneksi jaringan, memori, dll.

## Method

Method atau metode adalah fungsi yang didefinisikan di dalam sebuah class dan bekerja pada objek dari class tersebut.

## Property

Property atau properti adalah atribut milik sebuah objek yang menyimpan nilai dan biasanya mewakili ciri atau keadaan objek tersebut.

## Function

Function atau fungsi adalah blok kode yang dirancang untuk melakukan tugas tertentu dan bisa dipanggil berulang kali. Function membantu membuat kode lebih terorganisir, mudah dibaca, dan tidak perlu ditulis ulang.

## Parameter

Parameter adalah variabel yang ditulis di dalam tanda kurung saat mendefinisikan fungsi. Parameter berfungsi untuk menerima input yang dikirim ke fungsi agar fungsi bisa bekerja secara fleksibel.

## Argument

Argument adalah nilai nyata yang kamu kirim ke dalam function saat memanggilnya. Argument akan mengisi parameter yang didefinisikan di fungsi.

## Looping

Looping adalah proses menjalankan blok kode secara berulang selama kondisi tertentu masih terpenuhi.

## Scoping

Scoping adalah aturan yang menentukan di mana sebuah variabel bisa diakses atau digunakan dalam kode. Singkatnya scope adalah wilayah hidup sebuah variabel.

## Concatenating

Concatenating adalah proses menggabungkan dua atau lebih string menjadi satu string baru.

## Method Chaining

Method chaining adalah teknik dalam pemrograman di mana beberapa metode dipanggil berurutan dalam satu baris, karena setiap metode mengembalikan objek yang sama atau objek lain yang juga punya metode.

Sederhananya, method chaining adalah cara memanggil banyak metode berurutan, titik ke titik (.), tanpa harus menyimpan hasil tiap langkah ke variabel.

## Property Chaining

Property Chaining adalah proses mengakses properti yang bersarang di dalam objek lain, dengan menggunakan tanda titik (.) secara berurutan. Sederhananya, property chaining adalah cara untuk mengakses data yang ada di dalam struktur objek yang bertingkat.

## Binding

Binding adalah proses mengaitkan nama variabel, fungsi, metode dengan entitas nyata seperti lokasi memori, implementasi fungsi, atau tipe data. Binding terbagi menjadi dua jenis utama, yaitu:

1. Static Binding
2. Dynamic Binding

## Regular Expression (Regex)

Regular Expression (Regex) adalah pola khusus yang digunakan untuk mencari, mencocokkan, dan memanipulasi teks atau string.

## Nesting

Nesting adalah proses menempatkan satu struktur kode di dalam struktur kode lain.

## Boxing & Unboxing

Boxing adalah proses mengubah nilai primitif menjadi objek, sedangkan unboxing adalah proses mengambil nilai primitif dari dalam objek wrapper.

## Casting

Casting adalah proses mengubah tipe data suatu nilai ke tipe data lain dalam pemrograman.

## Loop Unrolling

Loop unrolling adalah teknik optimisasi dalam pemrograman di mana isi loop ditulis ulang secara eksplisit beberapa kali untuk mengurangi overhead kontrol loop dan meningkatkan performa.

## Operator Notation

Operator notation adalah cara penulisan ekspresi matematika atau logika yang melibatkan operator seperti +, -, *, / dan operand. 

Jenis:

1. Infix Notation
2. Prefix Notation
3. Postfix Notation

## Refactoring

Refactoring adalah proses mengubah struktur internal kode program tanpa mengubah perilaku luarnya. Tujuannya adalah untuk membuat kode lebih bersih, mudah dipahami, dan mudah dirawat, tanpa mengganggu fungsionalitas yang sudah berjalan.

## Object-oriented Programming (OOP)

Object-oriented Programming (OOP) adalah paradigma atau cara berpikir dari pemrograman yang mengorganisasi kode ke dalam objek-objek yang meniru benda atau konsep dunia nyata.

Paradigma:

1. Inheritance
2. Encapsulation
3. Polymorphism
4. Abstraction

## Interface

Interface adalah perjanjian yang menentukan metode apa saja yang harus dimiliki oleh suatu kelas, tanpa menentukan bagaimana cara kerjanya. Dengan kata lain interface mendefinisikan apa yang harus dilakukan, tapi tidak menjelaskan bagaimana melakukannya.

Contoh:

Misalnya kamu membuat interface bernama Hewan:

interface Hewan {
    void makan();
    void bergerak();
}

Lalu kamu punya dua kelas yang mengimplementasikan interface ini:

class Kucing implements Hewan {
    public void makan() {
        System.out.println("Kucing makan ikan");
    }

    public void bergerak() {
        System.out.println("Kucing berjalan dengan empat kaki");
    }
}

class Burung implements Hewan {
    public void makan() {
        System.out.println("Burung makan biji-bijian");
    }

    public void bergerak() {
        System.out.println("Burung terbang di udara");
    }
}

Setiap kelas wajib memiliki metode makan() dan bergerak(), karena sudah dijanjikan oleh interface Hewan.


Tujuan:

1. Standarisasi perilaku antar kelas.
2. Memisahkan definisi dari implementasi.
3. Mempermudah pengembangan sistem besar, agar berbagai bagian program bisa bekerja sama dengan aturan yang sama.
4. Mendukung prinsip OOP (Object-Oriented Programming) seperti abstraction dan polymorphism.

## Programming Interfaces

Programming Interfaces adalah cara sebuah bagian program berinteraksi dengan bagian lain, biasanya melalui fungsi, method, atau API.

## Application Programming Interfaces (API)

Application programming interface (API) adalah sekumpulan aturan dan protokol yang digunakan untuk berkomunikasi antara satu aplikasi dengan aplikasi lainnya.

Jenis:

1. REST API
2. SOAP API
3. GraphQL API
4. WebSocket API

## Foreign Function Interface (FFI)

Foreign Function Interface (FFI) adalah mekanisme yang memungkinkan satu bahasa pemrograman memanggil fungsi atau library dari bahasa lain.

## Hashing

Hashing adalah proses mengubah data seperti teks, file, angka menjadi serangkaian karakter tetap menggunakan fungsi matematika tertentu yang disebut hash function.

## Source Code

Source code adalah sekumpulan instruksi tertulis dalam bahasa pemrograman yang dibuat oleh programmer untuk memberi tahu komputer apa yang harus dilakukan.

## Dependency

Dependency adalah komponen, library, atau modul lain yang dibutuhkan oleh suatu program agar bisa berjalan dengan baik

## Library

Library adalah kumpulan fungsi siap pakai yang bisa kamu gunakan untuk menyelesaikan tugas tertentu dalam pemrograman, tanpa perlu menulis semuanya dari nol..

## Framework

Framework adalah kerangka kerja yang sudah disiapkan untuk membantu developer membuat aplikasi dengan lebih cepat dan teratur.

Tanpa framework, kamu harus membuat semua fitur dari nol seperti login, routing, atau koneksi database. Dengan framework, hal-hal itu sudah disediakan. Kamu tinggal menyesuaikan dan menambahkan logika programmu.

## Flowchart

Flowchart adalah diagram visual yang menggambarkan alur proses atau langkah-langkah logika dalam menyelesaikan suatu tugas atau program.

## Wireframe

Wireframe adalah rancangan awal dari tampilan antarmuka sebuah aplikasi atau website yang menunjukkan struktur, layout, dan elemen utama tanpa detail visual seperti warna atau gambar.

## Mockup

Mockup adalah representasi visual statis dari tampilan akhir sebuah aplikasi, website, atau produk, yang menunjukkan desain secara detail.

## Layout

Layout adalah susunan atau tata letak elemen-elemen seperti teks, gambar, tombol, dll, dalam sebuah halaman baik itu halaman web, dokumen, aplikasi, maupun desain grafis.

## Carousel

Carousel adalah komponen tampilan yang memungkinkan pengguna melihat beberapa konten dalam satu area secara bergulir, baik secara otomatis maupun manual.

## Pagination

Pagination adalah proses membagi konten panjang menjadi beberapa halaman, sehingga pengguna bisa menavigasi konten secara bertahap melalui tombol nomor urut, next dan previous.

## Software Driven UI (SDUI)

Software Driven UI (SDUI) adalah pendekatan dalam pengembangan antarmuka pengguna di mana tampilan aplikasi dikontrol oleh server atau software logic, bukan hanya ditentukan secara statis di sisi klien.

Dengan SDUI, server mengirimkan struktur, komponen, dan logika tampilan UI dalam bentuk data, lalu aplikasi klien merender tampilan berdasarkan data tersebut.

Kelebihan:

1. Update Ui Tanpa Update Aplikasi
Jika ingin mengubah tampilan atau layout, cukup ubah di server, tidak perlu rilis versi baru app.

2. Konsistensi Antar Platform
Server bisa mengirim data yang sama untuk Android, iOS, atau web.

3. Fleksibilitas
Bisa menyesuaikan UI untuk user berbeda tanpa mengubah kode app.

Kekurangan:

1. Ketergantungan Pada Server
Jika server lambat atau down, UI bisa gagal render.

2. Keterbatasan Kontrol Lokal
Beberapa efek UI kompleks mungkin sulit dilakukan hanya dari data server.

3. Debugging Lebih Sulit
Karena UI bisa berubah dari server, tracking bug bisa lebih rumit.

## Drag & Drop

Drag and drop adalah fitur antarmuka pengguna yang memungkinkan kamu memindahkan suatu elemen di layar ke tempat lain dengan cara klik, tahan dan geser.

## Development & Operations (DevOps)

Development & Operations (DevOps) adalah gabungan antara pengembangan perangkat lunak dan operasi sistem yang bertujuan untuk mempercepat pengembangan, pengujian, dan peluncuran aplikasi secara otomatis, efisien, dan andal.

## Internet of Things (IoT)

Internet of Things (IoT) adalah konsep di mana perangkat fisik seperti lampu, kulkas, kamera, mobil, jam tangan dihubungkan ke internet dan bisa saling bertukar data atau dikendalikan dari jarak jauh.

## Code Editor

Code Editor adalah perangkat lunak yang digunakan untuk menulis dan mengedit kode program. Ini adalah alat utama bagi programmer dalam menulis sintaks bahasa pemrograman seperti JavaScript, Python, C++, HTML, dan lainnya.

## Integrated Development Environment (IDE)

Integrated Development Environment (IDE) adalah perangkat lunak lengkap yang menyediakan semua alat yang dibutuhkan programmer untuk menulis, mengedit, menjalankan, dan men-debug kode dalam satu tempat.

Komponen:

1. Code Editor
2. Compiler/Interpreter
3. Debugger
4. Project/File Manager
5. Autocomplete/IntelliSense
6. Syntax Highlighting

## Garbage Collector (GC)

Garbage Collector (GC) adalah mekanisme otomatis dalam bahasa pemrograman yang bertugas mendeteksi dan menghapus data yang sudah tidak digunakan lagi oleh program, agar memori tetap efisien dan tidak bocor.

## Encoding/Decoding

Encoding adalah proses mengubah data menjadi format lain agar dapat disimpan dalam sistem komputer, dikirim lewat jaringan, dan ditampilkan dalam web atau sistem lain. Sedangkan decoding adalah proses mengembalikan data yang sudah di-encode ke bentuk aslinya.

Contoh:

1. Base64
2. BIG5
3. Color Encoding
4. URL Encoding
5. Universal Code
6. Shift-JIS
7. Extended Binary Coded Decimal Interchange Code
8. ISO-8859

## Add-on

Add-on adalah istilah umum untuk komponen tambahan yang diinstal ke dalam sebuah aplikasi atau perangkat lunak untuk menambahkan fitur baru atau meningkatkan fungsionalitasnya. Plugin dan extension merupakan bagian dari add-on.

## Plugins

Plugin adalah komponen tambahan yang ditambahkan ke sebuah perangkat lunak utama untuk menambah fitur atau fungsionalitas baru tanpa harus mengubah inti dari perangkat lunak tersebut.

## Extensions 

Extension adalah komponen tambahan yang ditambahkan ke sebuah web browser untuk menambahkan fitur baru atau memodifikasi fungsionalitas yang sudah ada.

## Microservice

Microservice adalah pendekatan arsitektur perangkat lunak di mana sebuah aplikasi besar dipecah menjadi komponen-komponen kecil yang berdiri sendiri dan saling berkomunikasi melalui API atau protokol jaringan seperti HTTPS.

## Graphical User Interface (GUI)

Graphical User Interface (GUI) adalah antarmuka pengguna berbasis grafis yang memungkinkan kamu berinteraksi dengan komputer menggunakan elemen visual seperti tombol, jendela, pointer, dan lain-lain.

## Encrypting/Decrypting

Encrypting adalah proses mengubah data asli menjadi data tidak terbaca menggunakan algoritma dan kunci tertentu, agar tidak bisa dipahami oleh orang yang tidak berwenang, sedangkan decrypting adalah proses mengembalikan ciphertext menjadi plaintext asli dengan menggunakan kunci yang benar.

## Proprietary License

Proprietary license adalah lisensi perangkat lunak tertutup, di mana pemilik mempertahankan hak penuh atas perangkat lunak, dan pengguna hanya diberi izin terbatas untuk menggunakan software tersebut sesuai aturan yang ditentukan.

## Shareware

Shareware adalah jenis perangkat lunak komersial yang bisa kamu coba secara gratis untuk sementara waktu atau dengan fitur terbatas, sebelum memutuskan untuk membeli versi penuhnya.

## Freemium

Freemium adalah model distribusi software atau layanan yang memberikan akses gratis ke fitur dasar, tapi fitur lanjutan atau tambahan hanya bisa diakses dengan membayar.

## Open Source License

Open Source License adalah jenis lisensi perangkat lunak yang mengizinkan siapa saja untuk melihat, menggunakan, memodifikasi, dan mendistribusikan ulang kode sumber dari perangkat lunak tersebut, biasanya secara gratis.

Jenis:

1. MIT License
2. GNU General Public License (GPL)
3. Apache License 2.0
4. BSD License
5. Creative Commons (CC)

## Cloud Computing

Cloud computing adalah teknologi yang memungkinkan kamu untuk mengakses dan menggunakan sumber daya komputasi (seperti server, penyimpanan, database, jaringan, perangkat lunak, dll) melalui internet (cloud), tanpa harus memiliki atau mengelola perangkat fisik secara langsung.

Jenis:

1. Infrastructure as a Service (IaaS)
2. Platform as a Service (PaaS)
3. Software as a Service (SaaS)

## Domain-specific Language (DSL)

Domain-specific Language (DSL) adalah bahasa pemrograman atau skrip yang dirancang khusus untuk menyelesaikan masalah dalam satu domain atau bidang tertentu, bukan untuk pemrograman umum seperti Python atau Java.

## Interface Definition Language (IDL)

Interface Definition Language (IDL) adalah bahasa yang digunakan untuk mendefinisikan antarmuka atau interface antara komponen perangkat lunak yang saling berkomunikasi, terutama yang ditulis dengan bahasa pemrograman berbeda.

Dengan kata lain, IDL berfungsi sebagai jembatan antar bahasa pemrograman supaya program bisa saling memahami struktur data dan fungsi yang digunakan.

Tujuannya adalah agar sistem yang dibuat dalam bahasa pemrograman yang berbeda bisa berkomunikasi secara mulus, tanpa perlu tahu detail implementasi internal masing-masing.

Tahapan:

1. Kamu menulis definisi interface di file .idl.
2. IDL compiler menerjemahkan file itu ke dalam bahasa pemrograman tertentu.
3. Program di tiap bahasa kemudian bisa saling memanggil fungsi atau bertukar data melalui interface tersebut.

Contoh:

interface Kalkulator {
    float tambah(in float a, in float b);
    float kurang(in float a, in float b);
}

Artinya ada interface bernama Kalkulator dengan dua fungsi tambah() untuk menerima dua angka dan mengembalikan hasil penjumlahan, dan fungsi kurang() mengembalikan hasil pengurangan.

Kemudian file .idl ini bisa dikonversi ke versi C++, Java, atau Python agar masing-masing bahasa tahu bentuk fungsi dan tipe datanya.

Penggunaan:

1. Common Object Request Broker Architecture (CORBA)
Sistem komunikasi antar objek di jaringan.

2. COM/DCOM (Microsoft)
Untuk komunikasi antar komponen Windows.

3. Web services / gRPC / Thrift / Protocol Buffers
Semuanya punya varian IDL modern untuk mendefinisikan API antar sistem.

Analogi:

Bayangkan IDL seperti kamus universal antara dua orang yang bicara bahasa berbeda. Selama keduanya mengikuti kamus itu, mereka bisa saling mengerti, meskipun cara mereka berpikir berbeda.

## Prototype-based Programming Language

Prototype-based Programming Language adalah paradigma pemrograman berorientasi objek, di mana objek dibuat berdasarkan objek lain yang disebut prototipe, bukan berdasarkan kelas seperti pada OOP tradisional.

## Firmware

Firmware adalah perangkat lunak khusus yang ditanamkan langsung ke dalam perangkat keras untuk mengontrol dan mengatur cara kerja perangkat tersebut.

## Abstract Syntax Tree (AST)

Abstract Syntax Tree (AST) adalah representasi berbentuk struktur pohon dari kode program, yang menunjukkan struktur sintaksis dari kode tersebut dalam bentuk yang lebih mudah dianalisis dan diproses oleh mesin.

## Robust

Robust adalah istilah untuk menggambarkan sebuah program atau sistem yang tetap stabil dan berjalan dengan benar meskipun terjadi kesalahan, input tidak valid, atau kondisi tak terduga.

## Single-threaded

Single-threaded adalah arsitektur pemrograman di mana suatu program hanya menjalankan satu alur eksekusi atau thread pada satu waktu. Program hanya bisa mengerjakan satu tugas dalam satu waktu atau langkah demi langkah yang secara berurutan.

## Agile

Agile adalah sebuah metodologi pengembangan perangkat lunak yang menekankan pada kolaborasi tim, iterasi cepat, responsif terhadap perubahan, umpan balik terus-menerus dari pengguna.

## Metadata

Metadata adalah data yang menjelaskan, mengidentifikasi, atau memberikan konteks terhadap data utama.

## Log

Log adalah catatan otomatis yang dibuat oleh sistem, aplikasi, atau perangkat yang berisi informasi tentang aktivitas, kejadian, atau kesalahan yang terjadi selama program atau sistem berjalan.

## Cache

Cache adalah penyimpanan sementara data yang digunakan untuk mempercepat proses akses di masa depan. Cache menyimpan salinan data yang sering diakses agar tidak perlu dimuat ulang dari sumber aslinya setiap kali dibutuhkan.

## General Purpose

General purpose adalah istilah yang mengartikan sebagai hal yang serba guna atau dapat digunakan untuk berbagai macam kebutuhan atau tugas, bukan hanya untuk satu tujuan khusus.

## Embedded System

Embedded system adalah sistem komputer khusus yang dirancang untuk melakukan satu tugas atau beberapa tugas tertentu, dan tertanam di dalam perangkat lain.

## Run-time Environment

Run-time Environment (RTE) adalah sistem tempat sebuah program dijalankan. Ini menyediakan semua sumber daya yang dibutuhkan agar program bisa berjalan dengan benar.

Contoh:

1. Java - Java Virtual Machine (JVM) / Java Runtime Environment (JRE).
2. JavaScript - Node.js dan Web Browser.
3. C++ - Compiler (MinGW).
4. Python - Interpreter (CPython / Pypy).
5. PHP - Web Server (Apache).

## Payment Processing Service

Payment Processing Service adalah layanan yang menangani proses transaksi pembayaran antara pembeli dan penjual secara elektronik, terutama dalam sistem e-commerce atau transaksi online.

## Monolith

Monolith adalah arsitektur perangkat lunak di mana seluruh bagian aplikasi dibangun menjadi satu kesatuan besar, termasuk antarmuka pengguna, logika bisnis, akses database dan fungsi-fungsi internal lainnya.

## Container

Container adalah lingkungan ringan dan terisolasi yang berisi semua yang dibutuhkan aplikasi untuk berjalan: kode, dependensi, pustaka, dan konfigurasi. Mirip seperti mini komputer virtual, tapi jauh lebih ringan daripada virtual machine.

## Number Systems

Number system adalah cara untuk mewakili angka menggunakan simbol atau digit tertentu dalam suatu basis (radix). Setiap sistem bilangan punya aturan dasar dan jumlah simbol berbeda yang digunakan untuk membentuk angka.

Contoh:

1. Binary (2): 0, 1
2. Octal (8): 0, 1, 2, 3, 4, 5, 6, 7
3. Decimal (10): 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
4. Hexadecimal (16): 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F

## Plain Text

Plain text atau teks biasa adalah teks murni tanpa format atau gaya khusus yang hanya terdiri dari huruf, angka, dan simbol standar yang bisa dibaca oleh semua komputer.