# ITERATION PROTOCOLS

## Iterable Protocol

Iterable protocol di JavaScript adalah kontrak atau aturan yang menentukan bagaimana sebuah objek bisa “diulang” (iterated) menggunakan for...of, spread operator, atau destructuring).

Syarat utama sebuah objek disebut iterable adalah:

1. Memiliki method [Symbol.iterator](), method ini harus mengembalikan sebuah iterator (objek yang memiliki .next()).

2. Objek iterator yang dikembalikan mengikuti Iterator Protocol (memiliki next() yang mengembalikan { value, done }).

Jadi Iterable Protocol itu aturan supaya objek bisa menghasilkan iterator.

## Iterable Object

Iterable object adalah objek yang bisa diiterasi menggunakan sintaks seperti for...of, spread (...), atau Array.from(). Syarat dari objek Iterable adalah memiliki method khusus bernama [Symbol.iterator]() yang mengembalikan objek iterator.

Iterable Objects:

1. Array
2. String
3. Map
4. Set
5. arguments
6. Hasil dari generator function

Non-iterable Objects:

1. Number
2. Boolean
3. Object Literal
4. Error
5. Function

Example:

```
const array = [1, 2, 3];
const string = "abc";

console.log(typeof array[Symbol.iterator]); // "function"
console.log(typeof string[Symbol.iterator]); // "function"

for (const value of array) {
  console.log(value);
}
// 1, 2, 3

const array = [10, 20, 30];
const iterator = array[Symbol.iterator](); // Iterable Object

// Symbol.iterator is a special method that returns an iterator from an iterable object.

console.log(iterator.next()); // { value: 10, done: false }
console.log(iterator.next()); // { value: 20, done: false }
console.log(iterator.next()); // { value: 30, done: false }
console.log(iterator.next()); // { value: undefined, done: true }
```

## Iterator Protocol

Iterator protocol adalah aturan atau kontrak yang menentukan bagaimana sebuah objek menyediakan cara untuk mengakses elemen-elemennya secara berurutan. Dengan kata lain, ini adalah standar agar objek bisa “i-iterasi”satu per satu.

Secara teknis, Iterator Protocol mensyaratkan bahwa sebuah objek harus memiliki method .next() yang mengembalikan sebuah objek dengan dua properti, yaitu value dan done.

Intinya: Iterator Protocol memungkinkan objek untukm enghasilkan nilai satu per satu dan engetahui kapan iterasi selesai.

## Iterator Object

Iterator object adalah objek yang mengatur cara mengambil data satu per satu dari sebuah koleksi secara manual. Objek Iterator hanya dapat dibuat melalui 3 cara, yaitu:

1. [Symbol.iterator] / Iterable Objects.
2. User-defined Iterator.
3. Generator.

Dengan iterator, kamu bisa mengontrol proses iterasi secara manual, tanpa harus pakai for, while, atau for...of. Iterator memiliki method next(), yang setiap kali dipanggil akan mengembalikan objek dengan bentuk **value** dan **done**.

Value adalah nilai saat ini dalam iterasi, dan done adalah nilai false jika masih ada data, nilai true jika iterasi selesai.

## User-defined Iterable

Example:

```
const counter = { // Iterator Object
  current: 1,
  last: 3,
  next() {
    if (this.current <= this.last) {
      return { value: this.current++, done: false };
    } else {
      return { done: true };
    }
  }
};

console.log(counter.next()); // { value: 1, done: false }
console.log(counter.next()); // { value: 2, done: false }
console.log(counter.next()); // { value: 3, done: false }
console.log(counter.next()); // { done: true }
```

## Generator

Example;

```
function* generateNumbers() {
  yield 1;
  yield 2;
  yield 3;
}

const it = generateNumbers(); // Generator object

console.log(it.next()); // { value: 1, done: false }
console.log(it.next()); // { value: 2, done: false }
console.log(it.next()); // { value: 3, done: false }
console.log(it.next()); // { value: undefined, done: true }
```

## For...of

Iterator biasanya tidak dipakai manual, JavaScript punya control abstraction bernama for...of, yang menggunakan iterator di belakang layar secara otomatis.

Example:

```
const arr = [1, 2, 3];

for (const value of arr) {
  console.log(value);
}

/*
 * Behind the scenes, for...of calls arr[Symbol.iterator](),
 * then next() continuously until done: true.
 */
```