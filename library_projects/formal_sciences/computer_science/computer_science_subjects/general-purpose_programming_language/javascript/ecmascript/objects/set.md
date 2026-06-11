# SET

Set adalah struktur data bawaan yang digunakan untuk menyimpan kumpulan nilai yang unik, artinya tidak ada duplikasi di dalamnya.

Example:

```
const angka = new Set([1, 2, 3, 3, 4]);
console.log(angka); // Output: Set(4) {1, 2, 3, 4}

// Creating and adding data
const data = new Set();

data.add("apel");
data.add("jeruk");
data.add("apel"); // Duplicate, will not be added again

console.log(data); // Output: Set(2) {'apel', 'jeruk'}

// Checking the elements
console.log(data.has("apel"));   // True
console.log(data.has("pisang")); // False

// Deleting the elements
data.delete("apel");
console.log(data); // Set(1) {'jeruk'}

// Counting the elements
console.log(data.size); // 1

// Looping
for (const item of data) {
  console.log(item);
}
// Output:
// jeruk

// Changing the Set to Array
const arr = [...data];
console.log(arr); // ['jeruk']
```

## Set Constructor Function

## Set Static Properties

## Set Instance Properties

## Set Instance Methods