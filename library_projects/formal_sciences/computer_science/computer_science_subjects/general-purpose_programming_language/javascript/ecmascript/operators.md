# OPERATORS

## Arithmetic Operators

### 1. Modulus (%)

Modulus adalah operator untuk mencari sisa hasil pembagian dua angka.

Syntax:

`a % b = sisa dari a - (b × pembagian_bulat)`

#### Dividend and Divisor

Dalam operasi modulus (%), jika angka di sebelah kiri **(dividend)** lebih kecil dari angka di sebelah kanan **(divisor)**, maka hasil modulus adalah angka sebelah kiri itu sendiri, karena, belum cukup besar untuk dibagi sekali pun.

Example:

```
1 % 5 = 1
2 % 5 = 2
3 % 5 = 3
1 % 7 = 1
2 % 7 = 2
3 % 7 = 3
```

Jika angka di sebelah kiri lebih besar dari angka di sebelah kanan, maka hasil modulus adalah angka sebelah kiri dibagi dengan angka sebelah kanan, lalu hasilnya dikurangi dengan angka sebelah kanan.

Example:

```
15 % 5 = 0 // 15 - (5 x 3) = 0
16 % 5 = 1 // 16 - (5 x 3) = 1
35 % 15 = 5 // 35 - (15 x 2) = 5
36 % 15 = 6 // 36 - (15 x 2) = 6

```

#### Modulus and Looping

Modulus (%) adalah operator untuk mendapatkan sisa pembagian
dan sering dipakai untuk membuat pola berulang atau rotasi otomatis.

Example:

```
1 % 4 = 1
2 % 4 = 2
3 % 4 = 3
4 % 4 = 0
5 % 4 = 1
6 % 4 = 2
7 % 4 = 3
8 % 4 = 0
```

## Increment / Decrement

### 1. Pre-increment / Pre-decrement Operators

Example:

```
let i = 5;
let x = ++i;

console.log(i); // 6
console.log(x); // 6
```

## 2. Post-increment / Post-decrement Operators
```
let i = 5;
let x = i++;
console.log(i); // 6
console.log(x); // 5  
```
   
## Nullish Coalescing

Nullish coalescing (??) adalah operator yang memberikan nilai default hanya jika nilai di sebelah kiri null atau undefined. Perbedaan dengan operator || adalah operator || menganggap semua falsy values (0, "", false) sama dengan false. ?? hanya memeriksa null atau undefined, sehingga 0 atau string kosong tidak diganti.

Syntax:

`let result = value ?? defaultValue;`

Explanation:

1. `value`

   Nilai yang ingin dicek.
   
2. `defaultValue`

   Nilai yang diberikan jika value null atau undefined.

Example:

```
let a = null;
let b = undefined;
let c = 0;
let d = "";

console.log(a ?? 10); // 10, because the a is null
console.log(b ?? 20); // 20, because the b is undefined
console.log(c ?? 30); // 0, not the null/undefined, but the result is 0
console.log(d ?? "empty"); // "", not the null/undefined, but the result is ""
```

## Optional Chaining

Optional chaining adalah fitur yang memungkinkan kita mengakses properti atau memanggil fungsi dari sebuah objek tanpa menimbulkan error jika properti atau objek tersebut null atau undefined.

Example:

```
// Use in property
const user = { name: "Kukuh", address: { city: "Jakarta" } };

console.log(user.address?.city); // "Jakarta"
console.log(user.contact?.email); // undefined, no error

/**
 * user.address?.city - Access the city if address exists
 * user.contact?.email - contact does not exist, the result is undefined without error
 */
  
// Use in method
const user = {
  greet: () => "Hello"
};

console.log(user.greet?.()); // "Hello"
console.log(user.sayBye?.()); // undefined, no error

// Use in property
const arr = [1, 2, 3];

console.log(arr?.[0]); // 1
console.log(arr?.[10]); // undefined, no error

/**
 * Optional chaining makes code more error-safe.
 * Error like TypeError: Cannot read property 'x' of undefined.
 */
```