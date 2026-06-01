# SYMBOL

Symbol di JavaScript adalah tipe data primitive yang digunakan untuk membuat identifier yang unik. Artinya, setiap Symbol selalu berbeda, bahkan jika kamu memberi deskripsi yang sama.

Example:

```
const a = Symbol("id");
const b = Symbol("id");

console.log(a === b); // false ❌

/**
 * Meskipun keduanya punya deskripsi "id",
 * hasilnya tidak sama, karena setiap Symbol bersifat unik.
 */
 
// Symbol as a unique key object.
const id = Symbol("id");

const user = {
  name: "Kukuh",
  [id]: 12345, // Use symbol as key.
};

console.log(user[id]); // 12345
console.log(user); // { name: "Kukuh", [Symbol(id)]: 12345 }

// Symbol properties cannot be accessed in the usual way:
console.log(Object.keys(user)); // ["name"]

// But it can still be taken with:
console.log(Object.getOwnPropertySymbols(user)); // [ Symbol(id) ]
```

## Tujuan Symbol

1. Membuat properti unik di objek, agar tidak bentrok dengan properti lain.
2. Menyembunyikan properti agar tidak muncul saat enumerasi for...in, Object.keys(), dll.
3. Menandai fitur internal dari JavaScript misalnya Symbol.iterator, Symbol.toStringTag, dll.

## Well-known Symbol

JavaScript punya beberapa symbol khusus yang digunakan untuk mengubah perilaku bawaan objek.

### 1. Symbol.iterator

Menentukan cara objek di-iterasi (for...of).

### 2. Symbol.toStringTag

Mengubah hasil Object.prototype.toString.

### 3. Symbol.hasInstance

Menentukan perilaku instanceof.

### 4. Symbol.toPrimitive

Menentukan cara konversi ke primitive value

## [Symbol.iterator] Instance Methods

### Array.prototype`[Symbol.iterator]`()

### TypedArray.prototype`[Symbol.iterator]`()

### String.prototype`[Symbol.iterator]`()

### Map.prototype`[Symbol.iterator]`()

### Set.prototype`[Symbol.iterator]`()