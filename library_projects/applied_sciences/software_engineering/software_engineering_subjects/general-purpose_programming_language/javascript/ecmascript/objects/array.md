# ARRAY

Example:
```
// Unassigned array
let array = [ ]
let array = new Array(length);

// Assigned array
const array = [item, item n]
const array = Array.of(item, item n);
const array = new Array(item, item n);

// Copying array item with spread operator
let array1 = [1, 2]
let array2 = [...variable1, 3, 4]

// Creating an array from string object
const array = Array.from("string");

// Creating an array with default items
const array = Array(5).fill(0);
```

## Array Destructuring

Syntax:

```
array = ["Item 1", "Item 2"]
array[item 1, item 2] = data;
```

## TypedArray

TypedArray adalah objek khusus yang digunakan untuk menyimpan dan mengelola data biner mentah secara efisien dan berjenis tetap (typed).

Kalau array biasa bisa menyimpan berbagai tipe data campuran seperti number, string, object, dst, typed array hanya bisa menyimpan satu jenis data numerik tertentu, misalnya 8-bit integer, 32-bit float, dan sebagainya.

### Structure of TypedArray

#### 1. ArrayBuffer

Menyediakan ruang memori mentah, tidak tahu isi atau tipe datanya, hanya blok memori.

#### 2. TypedArray

Menyediakan view (tampilan) di atas ArrayBuffer. Menentukan bagaimana data diinterpretasikan misalnya, sebagai Int8, Uint16, Float32, dll.

#### 3. DataView

   Alternatif fleksibel untuk mengakses ArrayBuffer dengan berbagai tipe data sekaligus.

Objects:

- Int8Array: 8-bit integer bertanda (128 s/d 127).
- Uint8Array: 8-bit integer tanpa tanda (0 s/d 255).
- Uint8ClampedArray: 8-bit integer tanpa tanda, nilai dibatasi 0–255 (0 s/d 255).
- Int16Array: 16-bit integer bertanda (-32768 s/d 32767).
- Uint16Array: 16-bit integer tanpa tanda (0 s/d 65535).
- Int32Array: 32-bit integer bertanda (-2³¹ s/d 2³¹-1).
- Uint32Array: 32-bit integer tanpa tanda (0 s/d 2³²-1).
- Float32Array: 32-bit floating point (presisi tunggal).
- Float64Array: 64-bit floating point (presisi ganda).


## Array Instance Methods

### copyWithin() / Array.prototype.copyWithin()

- Parameters: `Target, Start, End`

### flatMap() / Array.prototype.flatMap()

- Parameters: `callback(currentValue[, index[, array]])[, thisArg])`