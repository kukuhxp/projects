# MODULAR NEURAL NETWORK (MNN)

Modular Neural Network (MNN) adalah jenis arsitektur neural network yang dibangun dari beberapa modul atau sub-jaringan yang bekerja secara independen, lalu hasilnya digabungkan untuk menghasilkan keputusan akhir.

Setiap modul dalam MNN memiliki fungsi khusus dan melatih subset dari data atau tugas tertentu. Setelah semua modul memberikan output parsial, sistem menggabungkannya untuk menentukan output akhir.

Keunggulan

1. Paralel & efisien, karena modul-modul dapat dilatih dan dijalankan secara bersamaan.
2. Spesialisasi tiap modul fokus pada aspek berbeda dari masalah, meningkatkan akurasi.
3. Toleran terhadap kesalahan jika satu modul gagal, modul lain masih bisa berkontribusi.
4. Mudah diperluas dapat menambah modul baru tanpa melatih ulang seluruh sistem.

Kelemahan:

1. Proses integrasi output antar modul bisa kompleks.
2. Koordinasi antar modul memerlukan desain yang hati-hati agar tidak terjadi konflik hasil.
3. Membutuhkan sumber daya komputasi lebih banyak saat banyak modul digunakan.

Contoh:

1. Pengenalan Wajah

Modul 1: mengenali mata
Modul 2: mengenali hidung
Modul 3: mengenali bentuk wajah
Hasilnya digabung untuk menentukan identitas.

2. Sistem Diagnosis Medis

Modul 1: menganalisis data darah
Modul 2: menganalisis gejala klinis
Modul 3: menganalisis citra MRI
Semua modul berkontribusi untuk diagnosis akhir.