# DATA-INTERCHANGE FORMAT

## eXtensible Markup Language (XML)

eXtensible Markup Language (XML) adalah format teks yang digunakan untuk menyimpan dan mentransfer data dengan struktur yang dapat didefinisikan sendiri oleh pengguna. Tidak seperti HTML yang berfungsi untuk menampilkan data, XML hanya berfungsi untuk menyimpan data saja.

## Comma-separated Values (CSV) 

Comma-separated Values (CSV) adalah format file teks sederhana yang digunakan untuk menyimpan data dalam bentuk tabel. Setiap baris mewakili satu record dan setiap kolom dipisahkan oleh tanda koma.

## YAML Ain't Markup Language (YAML)

YAML Ain’t Markup Language (YAML) adalah format file untuk menyimpan dan menukar data yang mudah dibaca oleh manusia. YAML mirip dengan JSON atau XML, tapi tampilannya lebih rapi, sederhana, dan mudah dibaca karena tidak memakai tanda kurung {} atau tag < >. Biasanya digunakan untuk konfigurasi aplikasi, file setting server, atau data antar sistem.

Fungsi:

1. Konfigurasi server.
2. File setting aplikasi.
3. Deskripsi data antar program.

## Initialization (ini)

Initialization (ini) adalah file konfigurasi yang digunakan untuk menyimpan pengaturan dalam format teks sederhana. Biasanya dipakai oleh program atau sistem untuk membaca preferensi pengguna, lokasi file, koneksi database, dan pengaturan lain saat dijalankan.

Fungsi:

1. Menyimpan konfigurasi aplikasi.
2. Menyimpan pengaturan sistem operasi.
3. Menyimpan pengaturan koneksi database.
4. Menyimpan pengaturan permainan.

## Token-oriented Object Notation (TOON)

Token-oriented Object Notation (TOON) adalah sebuah format serialisasi data ringkas yang dibuat khusus untuk komunikasi dengan large language models. Namanya berasal dari Token-oriented Object Notation, yang mengindikasikan fokus utamanya pada efisiensi. Intinya: gunakan format internal biasa seperti JSON untuk pemrograman, tapi ketika mengirim ke LLM, konversikan ke TOON agar konsumsi token lebih rendah.

Contoh:

users[2]{id,name,role}:
  1,Alice,admin
  2,Bob,user
  
Keterangan:

1. users[2] menyatakan ada array berisi 2 elemen. 
2. {id,name,role} mendeklarasikan field‐field sekali saja.
3. Baris berikutnya adalah nilai masing-masing objek, dipisah dengan koma.
4. Tidak diperlukan tanda kurung {} untuk tiap objek, atau pengulangan kunci tiap baris.
5. Indentasi atau garis baru membantu membaca, tapi format tetap ringkas.