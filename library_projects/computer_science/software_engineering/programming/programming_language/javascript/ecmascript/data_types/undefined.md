# UNDEFINED

Undefined adalah nilai default yang menunjukkan bahwa sebuah variabel telah dideklarasikan tapi **belum diberi nilai secara tidak sengaja** atau sebuah properti/fungsi **tidak mengembalikan nilai**.

Example:

```
// Variable not filled in
let a;

console.log(a); // undefined

// Function does not return a value
function greet() {}

console.log(greet()); // undefined

// Object properties that do not exist
let obj = { name: "Alice" };

console.log(obj.age); // undefined
```