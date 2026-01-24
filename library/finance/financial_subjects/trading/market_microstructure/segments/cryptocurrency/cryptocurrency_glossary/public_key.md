# PUBLIC KEY

Public key adalah sebuah nilai kriptografis yang dihasilkan melalui algoritma matematika dari private key, dan berfungsi sebagai identitas terbuka dalam sistem kripto. Dalam konteks blockchain dan aset kripto, public key digunakan untuk mengidentifikasi pemilik akun atau wallet secara kriptografis, memverifikasi tanda tangan digital, dan menjadi dasar pembentukan alamat wallet. Public key boleh diketahui siapa pun tanpa mengorbankan keamanan dana.

## 1. Fungsi

### 1.1. Verifikasi Tanda Tangan Digital

Saat Anda mengirim kripto, transaksi ditandatangani dengan private key. Jaringan memverifikasi tanda tangan tersebut menggunakan public key. Jika valid, transaksi diterima. Artinya, public key berfungsi sebagai alat validasi keaslian kepemilikan.

### 1.2. Dasar Pembentukan Address

Dalam praktik

Private Key menghasilkan Public Key, Public Key menghasilkan Hash, dan Hash menghasilkan Address.

Contoh:

Bitcoin dan Ethereum tidak langsung menggunakan public key sebagai alamat. Public key di-hash dengan algoritma SHA-256 atau RIPEMD-160, agar lebih ringkas, lebih aman, dan lebih tahan terhadap serangan kriptografi masa depan.