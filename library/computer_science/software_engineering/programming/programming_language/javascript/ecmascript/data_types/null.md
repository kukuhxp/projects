# NULL

## Null

Null adalah nilai khusus yang menunjukkan bahwa suatu variabel dengan sengaja dikosongkan atau tidak memiliki nilai apa pun. Biasanya digunakan untuk menandai bahwa sebuah **variabel tidak berisi apa-apa secara sengaja.**

Example:

```
let data = null;

console.log(data); // null

// Null isn't 0 or ""
let a = null;
let b = 0;
let c = "";

console.log(a == null); // true
console.log(b == null); // false
console.log(c == null); // false
console.log(Boolean(a)); // false
console.log(Boolean(b)); // false
console.log(Boolean(c)); // false
```

## Bug of Null

Null is object adalah bug historis di JavaScript, seharusnya null bukan objek, tapi JavaScript sudah terlanjur mendeteksinya sejak awal hingga sekarang.

Contoh:

`typeof null; // "object"`