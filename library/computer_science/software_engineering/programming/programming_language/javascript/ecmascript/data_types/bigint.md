# BIGINT

BigInt di JavaScript adalah tipe data primitive yang digunakan untuk menyimpan bilangan bulat sangat besar yang melebihi batas Number. Tipe data Number di JavaScript hanya bisa menyimpan nilai antara -(2^53 - 1) sampai (2^53 - 1) atau sekitar -9,007,199,254,740,991 s/d 9,007,199,254,740,991. Jika kamu butuh angka lebih besar dari itu, gunakan BigInt.

Example:

```
const a = 10n;
const b = 5;

// You can't directly mix BigInt and Number:
console.log(a + b); // ❌ TypeError: Cannot mix BigInt and other types

console.log(a + BigInt(b)); // 15n
console.log(Number(a) + b); // 15
```

## BigInt Constructor Function

Example:

`const object = BigInt("123456789012345678901234567890");`

## BigInt Operation

Example:

```
const x = 1000000000000000000000n;
const y = 3n;

console.log(x + y); // 1000000000000000000003n
console.log(x * y); // 3000000000000000000000n
console.log(x / y); // 333333333333333333333n
```