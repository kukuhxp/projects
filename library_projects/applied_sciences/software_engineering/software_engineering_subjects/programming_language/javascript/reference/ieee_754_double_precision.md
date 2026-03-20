# IEEE 754 DOUBLE PRECISION

IEEE 754 Double Precision adalah standar format angka floating-point 64-bit yang digunakan hampir semua bahasa pemrograman modern untuk merepresentasikan angka pecahan dan sangat besar/kecil. Format ini menentukan bagaimana sebuah angka disimpan dalam 64 bit

## IEEE 754 Double Precision (64-bit) Structure

64 bit yang terbagi menjadi:

1. Sign (1 bit)
Menentukan positif (0) atau negatif (1).

2. Exponent (11 bit)
Menyimpan pangkat 2 yang digeser (biased exponent).

3. Fraction / Mantissa (52 bit)
Menyimpan presisi angka (significant digits).

## Floating-point Precision Error

Karena beberapa angka desimal tidak bisa direpresentasikan dengan tepat dalam basis 2. Akhirnya komputer menyimpannya sebagai aproksimasi, bukan nilai persis, sehingga operasi matematika kecil bisa melenceng sedikit.

Example:

```
1.1 + 1.8
// 2.9000000000000004
```

## Capacity

- Presisi maksimal: ~15–17 digit desimal
- Rentang exponent: −1022 sampai +1023
- Nilai terbesar: ~1.797 × 10³⁰⁸
- Nilai terkecil: ~2.225 × 10⁻³⁰⁸

## Pros

1. Presisi tinggi.
2. Dipakai sebagai standar internasional.
3. Didukung seluruh CPU & bahasa.

## Cons

1. Tidak bisa merepresentasikan semua angka desimal secara eksak.
2. Bisa muncul error rounding kecil.
3. Perlu teknik khusus untuk keuangan.

## Solving The Errors

### 1. Scaling

Example:

`(0.1 * 10 + 0.2 * 10) / 10`

### 2. toFixed()

Example:

`Number((0.1 + 0.2).toFixed(10))`

### 3. Math.round()

Example:

`Math.round((0.1 + 0.2) * 100) / 100`

### 4. JavaScript Libraries

- big.js
- decimal.js
- bignumber.js

Example:

`new Decimal(0.1).plus(0.2).toString(); // "0.3"`