# MAP

Map adalah metode bawaan untuk array yang digunakan untuk membuat array baru dengan menerapkan fungsi tertentu ke setiap elemen array lama.

Syntax:

```
array → array asal (opsional)
let newArray = oldArray.map(function(element, index, array) {
  // return new value to newArray
});

/**
 * Element is current element being processed.
 * Index is position of element in array (optional).
 * Array is original array (optinal).
 */

```

Example:

```
const numbers = [1, 2, 3, 4];
const doubled = numbers.map(num => num * 2);
console.log(doubled); // [2, 4, 6, 8]
console.log(numbers); // [1, 2, 3, 4] // The original array doesn't changed.
```

## Map Constructor

## Map Static Properties

## Map Static Methods

## Map Instance Properties

## Map Instance Methods