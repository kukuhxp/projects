# SOFTWARE DEVELOPMENT LIFE CYCLE (SDLC)

## 1. Planning

## 2. UI/UX Designing

## 3. Coding

Coding adalah proses menulis instruksi dalam bahasa pemrograman agar komputer bisa memahami dan menjalankan perintah tersebut.
Perbedaan antara coding dan programming, yaitu coding biasanya merujuk ke aktivitas teknis menulis kode program, sedangkan programming mencakup proses lebih luas, termasuk perencanaan, desain, dan pemecahan masalah.

Paradigm:

1. Declaration
2. Execution.

## 4. Testing

Testing adalah proses menguji dan memeriksa apakah program berjalan sesuai dengan yang diharapkan. Artinya, apakah kode yang dibuat menghasilkan output yang benar dan bebas dari kesalahan.

Tujuan:

1. Menemukan bug atau error sebelum program digunakan pengguna.
2. Memastikan fungsi berjalan sesuai spesifikasi.
3. Menjaga kualitas kode agar mudah dikembangkan atau diperbarui.
4. Menjamin keamanan dan keandalan software.

### 4.1. Unit Testing

Menguji bagian terkecil dari program untuk memastikan masing-masing berfungsi dengan benar. Contohnya, mengecek apakah fungsi tambah(a, b) benar-benar mengembalikan a + b.

### 4.2. Integration Testing

Menguji apakah beberapa modul atau fungsi yang berbeda bisa bekerja sama dengan baik. Contohnya, modul login dan modul database dapat berkomunikasi tanpa error.

### 4.3. System Testing

Menguji seluruh sistem secara keseluruhan untuk melihat apakah sesuai dengan kebutuhan awal.

### 4.4. Acceptance Testing (UAT)

Pengujian oleh pengguna akhir untuk memastikan program sesuai harapan mereka.

### 4.5. Regression Testing

Dijalankan setelah ada perubahan kode, untuk memastikan tidak ada fitur lama yang rusak akibat update.

## 5. Deployment

Deployment adalah proses mengirim dan menjalankan aplikasi di lingkungan nyata seperti server, cloud, atau perangkat agar bisa digunakan oleh orang lain.

### 5.1. Manual Deployment

Mengunggah file-file ke server secara manual dengan menggunakan Shell, SSH atau FTP.

### 5.2. Automated Deployment

Mengunggah file-file ke server secara otomatis dengan menggunakan Jenkins, GitHub Actions, atau CI/CD pipeline.

### 5.3. Continuous Deployment

Setiap kali ada update di kode, sistem otomatis langsung me-deploy versi terbaru.

## 6. Maintenance

Maintenance adalah tahap setelah sebuah program selesai dirilis, di mana pengembang melakukan perbaikan, pembaruan, atau peningkatan agar software tetap berfungsi dengan baik dan sesuai kebutuhan pengguna. Tujuannya adalah menjaga agar software tetap stabil, aman, dan relevan seiring waktu.

### 6.1. Corrective Maintenance

Memperbaiki bug atau error yang ditemukan setelah software digunakan. Contohnya, tombol login tidak berfungsi karena kesalahan logika kode.

### 6.2. Adaptive Maintenance

Menyesuaikan software dengan perubahan lingkungan seperti sistem operasi, hardware, atau regulasi baru. Contohnya, update aplikasi agar kompatibel dengan Android versi terbaru.

### 6.3. Perfective Maintenance

Menambahkan atau meningkatkan fitur agar software lebih baik dan efisien. Contohnya, menambah fitur dark mode karena banyak pengguna memintanya.

### 6.4. Preventive Maintenance

Meningkatkan struktur kode agar lebih mudah dirawat dan aman di masa depan. Contohnya, membersihkan kode lama atau refactoring atau memperbarui library untuk mencegah bug potensial.