# JAVASCRIPT OBJECT NOTATION (JSON)

JavaScript Object Notation (JSON) adalah format ringan dan mudah dibaca untuk menyimpan dan bertukar data antar aplikasi.JSON digunakan untuk menyimpan data dalam struktur objek key dan value.

## JSON Web Token (JWT)

JSON Web Token (JWT) adalah standar token berbasis JSON yang digunakan untuk mengamankan pertukaran informasi antara client dan server. JWT banyak dipakai untuk autentikasi dan otorisasi di aplikasi web dan API.

Struktur:

`xxxxx.yyyyy.zzzzz`

1. Header

   Berisi informasi tipe token dan algoritma yang dipakai untuk tanda tangan.
   ```
   {
     "alg": "HS256",
     "typ": "JWT"
   }
   ```

2. Payload

   Berisi data atau klaim yang ingin dikirim. Bisa informasi user, role, atau waktu kadaluarsa. Payload tidak terenkripsi, jadi jangan masukkan data sensitif seperti password di sini.

   ```
   {
     "user_id": "12345",
     "role": "admin",
     "exp": 1736539200
   }
   ```

3. Signature

   Hasil enkripsi kombinasi header + payload menggunakan secret key atau private key. Tujuannya adalah memastikan token tidak diubah oleh pihak ketiga.
   
Cara Kerja:

1. User login, lalu server memverifikasi kredensial.
2. Server membuat JWT lalu mengirim ke client.
3. Client menyimpan JWT di cookie, localStorage, atau memory.
4. Client mengirim JWT di header setiap request ke server, `Authorization: Bearer <JWT>`
5. Server memverifikasi signature, jika valid maka request diterima.

Kelebihan:

1. Stateless, server tidak perlu menyimpan sesi di database, cukup verifikasi token.
2. Mudah diintegrasikan dengan aplikasi web dan mobile.
3. Cross-domain, bisa digunakan untuk Single Sign-on (SSO).