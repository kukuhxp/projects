# OBFUSCATION

Obfuscation adalah teknik untuk mengaburkan, menyamarkan, atau mempersulit pemahaman terhadap suatu kode, data, atau informasi agar tidak mudah dibaca, dianalisis, atau direkayasa balik atau reverse engineered.

Example:

```
// Source Code
function tambah(a, b) {
  return a + b;
}

// Obfuscated
function _0x1a2b(_0x3c,d){return _0x3c+d;}
```

## Purpose

### 1. Mencegah Reverse Engineering

Membuat kode sulit dibaca sehingga orang lain tidak mudah mencuri logika program.

### 2. Melindungi Hak Cipta

Menjaga algoritma atau teknik yang bersifat rahasia.

### 3. Menghambat Modifikasi Ilegal

Misalnya pada aplikasi berbayar agar tidak mudah dibobol.

### 4. Meningkatkan Keamanan

Menyembunyikan informasi sensitif seperti API key, walau tidak 100% aman.

## Obfuscation Methods

### 1. Renaming
### 2. Control Flow Obfuscation
### 3. String Encryption
### 4. Dead Code Insertion

## Note

Obfuscation bukanlah perlindungan sempurna. Seorang reverse engineer berpengalaman masih bisa memecahkannya, tapi prosesnya akan jauh lebih sulit dan memakan waktu.