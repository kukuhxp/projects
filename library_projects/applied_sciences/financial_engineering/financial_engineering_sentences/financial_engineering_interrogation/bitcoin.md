# BITCOIN

## Q: Bitcoin adalah sistem pembayaran berbasis blockchain.

## A: Betul sekali. Sebagai sistem pembayaran, Bitcoin berbeda dari aplikasi seperti GoPay atau kartu kredit karena ia tidak bergantung pada perusahaan atau bank mana pun untuk memproses transaksi. Berikut adalah tiga komponen yang membuat Bitcoin bekerja sebagai sistem pembayaran:

### 1. Blockchain sebagai Buku Kas

Setiap transaksi yang pernah terjadi dicatat dalam blockchain. Ini adalah "database" permanen yang tidak bisa dihapus atau diubah, sehingga tidak ada risiko transaksi hilang.

### 2. Verifikasi Tanpa Perantara

Saat Anda mengirim Bitcoin, node-node di jaringan akan memeriksa apakah Anda benar-benar memiliki saldo tersebut. Jika valid, transaksi diproses tanpa butuh persetujuan admin atau pihak bank.

### 3. Peer-to-Peer (P2P)

Uang berpindah langsung dari dompet (wallet) pengirim ke dompet penerima di mana pun mereka berada di dunia, selama ada koneksi internet.

Namun, penting untuk dicatat bahwa dalam beberapa tahun terakhir, peran Bitcoin mulai bergeser. Banyak orang kini lebih melihatnya sebagai "Emas Digital" (aset penyimpan nilai) daripada alat pembayaran harian untuk beli kopi, karena adanya biaya transaksi (fee) dan waktu konfirmasi yang diperlukan.

## Q: Di mana server bitcoin?

## A: Bitcoin tidak memiliki satu server pusat karena beroperasi pada jaringan yang terdesentralisasi. Alih-alih satu lokasi fisik, "server" Bitcoin terdiri dari ribuan komputer di seluruh dunia yang disebut node. Berikut adalah poin-poin utama mengenai infrastruktur Bitcoin:

### 1. Distribusi Global

Node Bitcoin tersebar di berbagai negara, memastikan tidak ada satu entitas atau pemerintah pun yang memiliki kendali penuh atas jaringan tersebut.

### 2. Peran Node

Setiap node menyimpan salinan lengkap dari blockchain (buku besar transaksi) dan bertugas memvalidasi transaksi baru untuk menjaga keamanan jaringan.

### 3. Akses Terbuka

Siapa pun yang memiliki komputer dan koneksi internet dapat menjalankan node Bitcoin sendiri, sehingga secara teknis menjadi bagian dari "server" jaringan tersebut.

### 4. Pusat Penambangan (Mining)

Meskipun jaringan node tersebar, ada lokasi-lokasi tertentu dengan konsentrasi perangkat keras penambangan yang besar (seperti di Texas, AS) karena biaya listrik yang murah dan regulasi yang mendukung.

## Q: Jadi setiap node harus menyalin seluruh isi blockchain bitcoin?

## A: Tidak semua node harus menyalin seluruh isi blockchain secara permanen. Meskipun idealnya sebuah Full Node menyimpan seluruh riwayat transaksi, ada beberapa pengecualian dan jenis node lain yang lebih "ringan": [1, 2, 3] 

### 1. Full Node (Penyimpan Seluruh Data)

Tipe ini mengunduh dan memvalidasi setiap transaksi sejak blok pertama (tahun 2009). Hingga April 2026, ukuran seluruh blockchain Bitcoin telah mencapai sekitar 735 GB.

### 1.1. Archival Full Node

Menyimpan seluruh data tersebut selamanya di penyimpanan lokal.

### 1.2. Pruned Full Node

Tetap memvalidasi seluruh blockchain dari awal, tetapi setelah divalidasi, ia akan menghapus data transaksi lama dan hanya menyisakan data terbaru yang diperlukan untuk menjaga keamanan (biasanya hanya beberapa GB terakhir).

## 2. Light Node / SPV Node (Hanya Sebagian)

Light Node (Simplified Payment Verification) tidak mengunduh seluruh blockchain. Hanya mengunduh Block Header (ringkasan blok), bukan data transaksi lengkap. Sangat ringan sehingga bisa dijalankan di smartphone atau perangkat dengan memori kecil. Bergantung pada Full Node untuk memverifikasi apakah sebuah transaksi benar-benar valid.

Secara teknis, jaringan tetap aman selama masih banyak Full Node yang tersebar secara independen untuk memastikan tidak ada yang memanipulasi riwayat transaksi.

## Q: Spesifikasi komputer yang dibutuhkan untuk menjalankan node sendiri.

## A: Untuk menjalankan Bitcoin Full Node di tahun 2026, Anda tidak membutuhkan superkomputer, tetapi membutuhkan penyimpanan yang cukup besar. Perangkat populer seperti Raspberry Pi 4/5 atau laptop tua masih sangat mumpuni. Berikut adalah spesifikasi minimum dan rekomendasi untuk pengalaman yang lancar:

### 1. Perangkat Keras (Hardware) [4] 

#### 1.1. Penyimpanan (Storage)

Minimal 750 GB - 1 TB. Sangat disarankan menggunakan SSD (NVMe lebih baik) daripada HDD karena proses sinkronisasi awal (Initial Block Download) akan jauh lebih cepat.

#### 1.2. Memori (RAM)

Minimal 2 GB, tetapi 4 GB - 8 GB sangat direkomendasikan agar sistem tidak lambat saat memproses transaksi.

#### 1.3. Prosesor (CPU)

Minimal prosesor 1 GHz atau lebih. Hampir semua CPU modern (dual-core ke atas) sudah mencukupi.

### 2. Koneksi Internet

#### 2.1. Kecepatan

Minimal 400 kbps upload. Namun, koneksi broadband standar (Indihome/Biznet/dll) sudah lebih dari cukup.

#### 2.2. Kuota Data

Ini poin krusial. Sinkronisasi awal akan mengunduh sekitar 740 GB data. Setelah itu, node akan menggunakan sekitar 20 GB/bulan untuk download dan bisa lebih dari 200 GB/bulan untuk upload jika Anda membiarkan node membagikan data ke pengguna lain. Disarankan menggunakan paket unlimited.

### 3. Sistem Operasi (Software)

Anda bisa menggunakan sistem operasi yang sudah biasa Anda pakai.

- Windows 10/11, macOS, atau Linux (Ubuntu sangat populer untuk node).

- OS Khusus: Jika ingin perangkat yang didedikasikan hanya untuk Bitcoin, Anda bisa mencoba [Umbrel](https://umbrel.com/) atau RaspiBlitz yang sangat mudah digunakan. [16, 17] 

## Perbedaan "Pruned" vs "Archival" Node

Jika penyimpanan Anda terbatas (misalnya hanya punya SSD 128 GB), Anda bisa menjalankan Pruned Node. Node ini tetap memvalidasi semua transaksi, tetapi hanya menyimpan data terbaru (sekitar 7-10 GB) dan menghapus data lama setelah divalidasi. [6, 18] 
Penting: Menjalankan node adalah untuk mendukung jaringan dan privasi transaksi Anda sendiri, bukan untuk mencari keuntungan seperti mining.

## Q: Jadi konsep desentralisasi adalah database yang dibagikan ke node-node yang terhubung?

## A: Tepat sekali. Secara teknis, ini disebut sebagai Distributed Ledger Technology (DLT) atau Buku Besar Terdistribusi. Bayangkan bedanya dengan bank konvensional:

### Sentralisasi (Bank)

Hanya bank yang punya buku catatan transaksi. Jika server bank mati atau datanya diubah sepihak, nasabah tidak bisa berbuat apa-apa.

### Desentralisasi (Bitcoin)

Ribuan node memiliki salinan buku catatan (database) yang identik.

Berikut adalah 3 pilar yang membuat database ini bekerja tanpa admin pusat:

### 1. Konsensus (Aturan Main)

Karena tidak ada "bos", semua node setuju pada aturan yang sama. Jika ada satu node yang mencoba memasukkan transaksi palsu, node lain akan melihat bahwa data tersebut tidak cocok dengan catatan mereka dan otomatis menolaknya.

### 2. Transparansi & Keamanan

Karena database-nya dibagikan, setiap orang bisa memverifikasi transaksi tanpa harus percaya pada pihak ketiga. Sangat mustahil untuk meretas jaringan ini karena peretas harus meretas lebih dari 51% node di seluruh dunia secara bersamaan.

### 3. Sinkronisasi Real-time

Setiap kali ada transaksi baru, informasi tersebut disiarkan ke seluruh jaringan. Dalam hitungan detik, ribuan komputer di seluruh dunia memperbarui catatan mereka agar tetap sinkron.

Jadi, kekuatannya bukan pada seberapa canggih satu server, tapi pada jumlah komputer yang saling memvalidasi satu sama lain.