# WEB DEVELOPMENT

Web development adalah proses membuat dan mengelola website mencakup semua aspek teknis seperti membangun tampilan, mengelola server dan database, serta memastikan situs berjalan dengan baik dan aman.

## Front-end Developer

Front-end Developer adalah pengembang perangkat lunak yang bertanggung jawab untuk membangun tampilan antarmuka pengguna dari sebuah website atau aplikasi, yaitu bagian yang langsung dilihat dan digunakan oleh pengguna.

## Back-end Developer

Back-end Developer adalah pengembang perangkat lunak yang bertanggung jawab atas bagian belakang dari aplikasi atau website, yaitu bagian yang tidak langsung terlihat oleh pengguna, tetapi sangat penting untuk menjalankan fungsionalitas sistem.

## Full-stack Developer

Full-stack Developer adalah pengembang perangkat lunak yang menguasai dan bekerja di kedua sisi aplikasi, yaitu front-end atau tampilan antarmuka pengguna dan back-end atau logika, server, dan database.

## Hyperlink

Hyperlink atau link adalah tautan yang menghubungkan satu halaman web ke halaman lain, baik dalam situs yang sama maupun ke situs lain di internet.

## Tracking Paramaters:

Tracking parameter atau parameter pelacakan adalah bagian tambahan di akhir URL yang digunakan untuk melacak sumber, perilaku, atau kampanye pengunjung di sebuah situs web. Biasanya muncul setelah tanda tanya ? di URL.

Meskipun terlihat rumit, parameter pelacakan tidak mengubah isi halaman, halaman yang dibuka tetap sama.

Contoh:

```
// URL
https://toko.com/promo?utm_source=instagram&utm_medium=story&utm_campaign=novsale

// Tracking Parameter
?utm_source=instagram&utm_medium=story&utm_campaign=novsale
```

Fungsi:

1. Mengetahui dari mana pengunjung datang.
2. Mengetahui bagaimana mereka mengakses halaman.
3. Mengetahui kampanye mana yang efektif.

Komponen:

1. Sumber Traffic = utm_source
2. Jenis Media = utm_medium
3. Nama Kampanye = utm_campaign
4. Kata Kunci = utm_term
5. Variasi Konten = utm_content
6. Sistem referral = (?ref=abcd1234)

Cara Kerja:

1. Kamu klik link iklan `https://toko.com/promo?utm_source=facebook&utm_campaign=blackfriday`
2. Website menerima parameter tersebut.
3. Sistem analitik seperti Google Analytics, Meta Pixel, atau Mixpanel membaca parameter itu.
4. Data disimpan agar pemilik tahu performa iklan dari tiap sumber.

## Access Token

Access token adalah kode unik yang digunakan untuk mengizinkan akses ke data atau layanan tertentu, tanpa harus terus-menerus mengirimkan username dan password.

Bayangkan kamu masuk ke akun Google. Setelah login sekali, kamu tidak perlu masukkan password lagi setiap kali membuka Gmail atau YouTube, kan? Itu karena browser-mu sudah menyimpan access token dari Google.

Cara Kerja:

1. Kamu login, lalu server memverifikasi username & password.
2. Server membuat access token.
3. Token dikirim ke client.
4. Client menyertakan token itu setiap kali mengakses API atau data pribadi.
5. Server memeriksa token untuk memastikan permintaan valid.

Contoh:

```
// Token
eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9...

// JWT
{
  "user_id": "12345",
  "role": "admin",
  "exp": 1736539200
}
```

## Cookies

Cookies adalah file kecil yang disimpan di perangkat pengguna oleh situs web, berisi informasi tertentu seperti data login, preferensi pengguna, atau aktivitas situs sebelumnya.

Isi:

1. Data login.
2. Preferensi pengguna.
3. Session ID.
4. Access token.

Contoh:

`session_id=abc123; expires=Wed, 09 Nov 2025 12:00:00 GMT; path=/;`

## Content Management Systems (CMS)

Content Management System (CMS) adalah perangkat lunak yang memungkinkan kamu untuk membuat, mengelola, dan mengubah isi website tanpa harus menulis kode dari nol.

## Web Application Programming Interface (Web API) 

Web Application Programming Interface (Web API) adalah antarmuka yang memungkinkan aplikasi atau sistem saling berkomunikasi melalui internet menggunakan protokol web seperti HTTP/HTTPS.

## Search Engine Optimization (SEO)

Search Engine Optimization (SEO) adalah proses mengoptimalkan sebuah website agar muncul di peringkat atas hasil pencarian mesin pencari.

## Landing Page

Landing page adalah halaman web tunggal yang dirancang khusus untuk menerima pengunjung dari sumber tertentu seperti iklan, email, media sosial dan mengarahkan mereka untuk melakukan satu tindakan spesifik (call to action), seperti mengisi formulir, membeli produk, mendaftar akun, mengunduh file atau aplikasi.

## robots txt

robots.txt adalah file teks sederhana yang digunakan di situs web untuk memberi instruksi kepada web crawler atau bot mesin pencari (seperti Googlebot) tentang bagian mana dari situs yang boleh atau tidak boleh diakses atau diindeks.

## Self-hosted

Self-hosted adalah sebuah aplikasi, layanan, atau sistem dijalankan dan diatur di server milik sendiri, bukan di server milik pihak ketiga atau layanan cloud publik.

## Data Center

Data center adalah fasilitas fisik yang berisi banyak komputer, sistem penyimpanan data, dan perangkat jaringan yang digunakan untuk menyimpan, mengelola, dan memproses data dalam skala besar.

Data center adalah otak dan jantung internet, tempat berbagai layanan online seperti website, aplikasi, cloud storage, dan platform media sosial berjalan.

## Indexer

Indexer adalah komponen atau mekanisme dalam sistem komputer yang berfungsi untuk mengumpulkan, menganalisis, dan menyimpan informasi secara terstruktur agar mudah dicari atau diakses kembali.

## Ranking Engine

Ranking engine adalah komponen dari sistem pencarian atau rekomendasi yang bertugas untuk mengurutkan hasil pencarian atau rekomendasi berdasarkan relevansi, kualitas, atau skor tertentu.

## API Routes

API Routes adalah jalur atau endpoint dalam sebuah aplikasi web yang digunakan untuk mengatur permintaan dan respons dalam API.

## cPanel

cPanel adalah control panel berbasis web yang digunakan untuk mengelola server hosting dan website dengan mudah tanpa harus menjalankan perintah lewat terminal atau coding manual.

## Googlebot

Googlebot adalah program otomatis yang digunakan untuk menjelajahi dan mengindeks halaman-halaman di internet. Googlebot bertugas untuk mengumpulkan informasi dari berbagai situs web agar bisa dimasukkan ke dalam indeks pencarian Google, sehingga ketika seseorang melakukan pencarian, Google bisa menampilkan hasil yang relevan.

## WebAssembly (WASM)

WebAssembly (WASM) adalah teknologi yang memungkinkan kode dari bahasa lain seperti C, C++, Rust, Go, dll, dijalankan di browser dengan kecepatan hampir setara dengan aplikasi native.

Biasanya browser hanya bisa menjalankan JavaScript, tapi dengan WebAssembly, kamu bisa menulis program dalam bahasa lain, mengompilasinya menjadi format .wasm, lalu menjalankannya di browser bersama JavaScript.

## Web Hosting

Web hosting adalah layanan yang menyediakan tempat di server untuk menyimpan file-file website kamu (seperti HTML, gambar, CSS, database), agar website tersebut bisa diakses secara online melalui internet.

## World Wide Web (WWW)

World Wide Web (WWW) adalah sistem informasi berbasis internet yang memungkinkan kamu mengakses dan menelusuri halaman-halaman web melalui browser.

## Web Storage

Web storage adalah fitur dari browser web yang memungkinkan penyimpanan data secara lokal di perangkat pengguna menggunakan JavaScript, tanpa perlu server. Fungsinya mirip seperti database kecil di dalam browser.

Web storage merupakan bagian dari Web API dan terdiri dari beberapa jenis seperti Cookies, LocalStorage, SessionStorage, IndexedDB.

## Web Rendering

Web rendering adalah proses menampilkan halaman web di browser, dari kode (HTML, CSS, JavaScript) menjadi tampilan visual yang kamu lihat di layar, seperti teks, gambar, tombol, layout, animasi, dan sebagainya. Ada 3 jenis web rendering, yaitu:

- Server-side Rendering (SSR)
- Client-side Rendering (CSR)
- Static-site Generator (SSG)

## Web Server

Web server adalah perangkat lunak atau perangkat keras yang bertgas menerima, memproses, dan merespons permintaan dari klien untuk mengakses halaman web melalui protokol HTTP atau HTTPS.

Saat kamu mengetik alamat website di browser misalnya www.google.com, browser mengirim permintaan ke web server Google. Web server kemudian mengirim balik halaman web yang diminta agar bisa ditampilkan di layar kamu.

## Web Crawler

Web crawler adalah program otomatis yang menjelajahi internet dengan cara mengunjungi dan membaca isi halaman-halaman web, lalu mengumpulkan informasi dari sana.

## Webhook

Webhook adalah mekanisme komunikasi otomatis antara dua aplikasi, di mana satu aplikasi akan mengirimkan data secara langsung ke aplikasi lain ketika suatu peristiwa terjadi, tanpa perlu diminta.

## Web Browser

Web browser adalah aplikasi perangkat lunak yang digunakan untuk mengakses, menampilkan, dan berinteraksi dengan halaman web di internet.

## Web Domain

Web domain atau domain name adalah alamat unik yang digunakan untuk mengakses sebuah website di internet, seperti google.com, wikipedia.org, youtube.com. Saat kamu mengetik alamat seperti youtube.com di browser, sebenarnya kamu sedang mengakses alamat IP dari server YouTube, tapi karena alamat IP sulit diingat (misalnya 142.250.4.14), maka digunakanlah nama domain sebagai gantinya.

## Web Builder

Web builder adalah alat atau platform yang memungkinkan kamu membuat website tanpa perlu menulis kode secara manual. Dengan web builder, kamu bisa membuat situs menggunakan antarmuka visual hanya dengan drag & drop dan template desain siap pakai.

## Web Fuzzing

Web fuzzing adalah teknik pengujian keamanan aplikasi web dengan cara mengirimkan input-input acak, tidak valid, atau berbahaya ke dalam formulir, URL, API, atau parameter web untuk mendeteksi celah keamanan.

## Web Scraping

Web scraping adalah proses mengambil data secara otomatis dari halaman web. Biasanya dilakukan dengan menggunakan program atau script yang membaca dan menyalin konten dari situs web tertentu.

## Virtual Hosts

Virtual hosts adalah fitur dalam web server seperti Apache atau Nginx yang memungkinkan satu server fisik dengan satu IP address untuk melayani banyak website sekaligus.

## HTTP Status Code

HTTP Status Code adalah kode tiga digit yang dikirim oleh server web sebagai respon terhadap permintaan dari klien. Kode ini memberi tahu apakah permintaan berhasil, gagal, atau butuh tindakan tambahan.

Fungsi:

HTTP Status Code berfungsi sebagai indikator hasil komunikasi antara klien dan server, misalnya apakah halaman ditemukan? apakah pengguna diizinkan mengakses? apakah server mengalami error?

Struktur:

Formatnya selalu 3 digit angka, misalnya 200, 404, atau 500. Digit pertama menunjukkan kategori respon.

1xx (100–199): Informasi permintaan diterima, proses berlanjut.
2xx (200–299): Sukses bahwa permintaan berhasil diproses.
3xx (300–399): Redirect atau perlu tindakan tambahan.
4xx (400–499): Error di pihak klien.
5xx (500–599): Error di pihak server.

Contoh:

1. Kode 2xx - Success

200 - OK: Permintaan berhasil dan hasil dikirim.
201 - Created: Data berhasil dibuat lewat POST.
204 - No Content: Permintaan berhasil, tapi tidak ada data dikirim kembali.

2. Kode 3xx – Redirection

301 - Moved Permanently: URL telah dipindahkan secara permane.	
302 - Found: URL sementara dipindahkan.
304 - Not Modified: Data belum berubah, gunakan cache	

3. Kode 4xx – Client Error

400 - Bad Request: Permintaan salah, format request tidak valid.
401 - Unauthorized: Akses membutuhkan autentikasi.
403 - Forbidden: Akses ditolak meskipun sudah login.	
404 - Not Found: Resource halaman/file tidak ditemukan.
429 - Too Many Requests: Terlalu banyak permintaan dalam waktu singkat.


4. Kode 5xx – Server Error

500 - Internal Server Error: Kesalahan umum di sisi server	
502 - Bad Gateway: Server menerima respon buruk dari server lain	
503 - Service Unavailable: Server sedang tidak bisa diakses karena maintenance.	
504 - Gateway Timeout: Server tidak merespon dalam waktu yang ditentukan.

## Session

Session adalah periode interaksi antara pengguna dan sistem yang berlangsung selama pengguna aktif menggunakan layanan tersebut. Konsep ini digunakan untuk melacak, menyimpan, dan mengelola status pengguna sementara waktu, terutama di aplikasi web.

## Real-time Messaging Protocol (RTMP)

Real-time Messaging Protocol (RTMP) adalah protokol komunikasi yang awalnya dikembangkan oleh Adobe untuk mengalirkan audio, video, dan data secara real-time melalui internet.