# REGEXP

Regular Expression (RegExp) adalah pola teks yang digunakan untuk mencari, mencocokkan, atau memanipulasi teks di JavaScript.

Example:

```
let teks = "Halo dunia!"; // Expression Literal
let pola = /Halo/; // RegExp Pattern
console.log(pola.test(teks)); // true
```

## Fungsi RegExp

1. Mencari kata tertentu dalam teks.
2. Mengecek apakah format email valid,
3. Mengganti pola teks tertentu,
4. Mengekstrak data dari string.

## Regex Flag

Flag adalah penanda opsional yang diletakkan setelah garis miring penutup (/) untuk mengubah cara regex bekerja.

Example:

```
// g Flag
const text = "cat, cat, cat";
const regex = /cat/g;
console.log(text.match(regex)); // ["cat", "cat", "cat"]

// i Flag
const regex = /hello/i;
console.log(regex.test("HELLO")); // true

// m Flag
const regex = /^hi/m;
const text = "hello\nhi";
console.log(text.match(regex)); // ["hi"]

// Combination Flag
const regex = /hello/gi;
```

## Regex Flag List Flag

### 1. g / Global

Mencari semua kecocokan, bukan hanya yang pertama.

### 2. i / Ignore Case

Mengabaikan perbedaan huruf besar dan kecil (case-insensitive).

### 3. m / Multiline

Mengubah cara ^ dan $ bekerja agar mengenali baris baru.

### 4. s / Dotall

Membuat . juga cocok dengan karakter newline (\n).

### 5. u / Unicode

Mengaktifkan mode Unicode penuh (untuk karakter di luar ASCII).

### 6. y / Sticky

Mencocokkan dari posisi lastIndex secara tepat, bukan mencari ke depan seperti g.