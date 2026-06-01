# PACKER

Packer adalah program yang mengompresi atau mengenkripsi executable seperti .exe, lalu membungkusnya dengan loader khusus yang akan mengekstrak atau mendekompres isi program saat dijalankan.

## Purpose

1. Mengurangi ukuran file.
2. Menyembunyikan kode asli agar sulit dianalisis atau direkayasa balik.
3. Menghindari deteksi oleh antivirus.
4. Proteksi Intellectual Property.

## How It Works?

1. Packer mengompresi / mengenkripsi bagian-bagian program.
2. Packer menambahkan stub loader, yaitu kode kecil yang melakukan dekompresi di memori, kemudian menjalankan program asli.
3. Saat file .exe dibuka, loader berjalan dulu, lalu mengekstrak isi program, dan menjalankan kode asli.

## Legal Packers

1. Ultimate Packer for eXecutables (UPX).
2. ASPack
3. MPRESS
4. UPack

## Malware-oriented Packers

1. Themida
2. VMProtect
3. Enigma Protector