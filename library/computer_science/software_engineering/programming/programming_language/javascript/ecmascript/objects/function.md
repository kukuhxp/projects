# FUNCTION

Function adalah sebuah object yang dapat menjalankan beberapa baris perintah. Function terdiri dari name, parameter dan body.

## Jenis-jenis Function

### 1. Declaration

Example:

```
// Declaration
function functionX(parameter, parameter n) {
  functionBody;
}

functionX() // Invocation
   ```

### 2. Arrow Function

Example:

```
// Arrow Function 1
let variable = (parameter, parameter n) => {
   functionBody;
   return;
}

variable(); // Invocation

// Arrow Function 2: Without Parameter
let variable = () => functionBody;
variable(); // Invocation

// Arrow Function 3: One Parameter
let variable = parameter => statement; // Parameters may not use parentheses.

variable(); // Invocation

// Arrow Function 4: Two Parameters or More
const buatUser = (nama, umur) => ({ nama, umur });
console.log(buatUser("Kukuh", 25)); // Invocation

// It must be wrapped in brackets (), so that it is not mistaken for a code block.
```
   
### 3. Function Expression

Example:

```
let variable = function (parameter, parameter n) {
   functionBody;
}

variable(); // Invocation
```

### 4. Named Function Expression (NFE)

Example:

```
let variable = function functionX (parameter, parameter n) {
   functionBody;
}
   
// Invocation
variable(); ✅
functionX(); ❌
   
/*
 * Q: Why can't sayHello() be called directly?
 * A: Because the name sayHello only applies within the function itself.
 *
 * Q: When is NFE useful?
 * A: To recurse (call itself) without creating a global name:
 */
 
const factorial = function f(n) {
   return n === 0 ? 1 : n * f(n - 1);
};

console.log(factorial(5)); // 120
```
   
### 5. Higher-order Function (HOF)

Higher-order Function (HOF) adalah function yang menerima function sebagai argumen, atau mengembalikan function lain.

Example:

```
function functionX() {
  // Anonymous Function
  return function() {
    functionBody
  };
}

const variable = functionX();
sayHello(); // Function Variable
```

### 6. Function Constructor

Example:

```
let object = new Function(args, return);

object.property;
object.method();
```

### 7. Generator Function

Example:

```
function* functionX(parameter, parameter n) {
  yield value;
}

let object = functionName(); // Generator object
object.next(); // next() is instance method
```

### 8. Immediately Invoked Function Expression (IIFE)

Immediately Invoked Function Expression (IIFE) adalah fungsi yang langsung dipanggil saat dideklarasikan.

Example:

```
// IIFE
(function(parameter, parameter n) {
  functionBody;
})(Parameter, Parameter n);

// IIFE Arrow Function
((parameter, parameter n) => {
  functionBody;
})(Parameter, Parameter n)
   ```

### 9. Callback

Callback adalah fungsi yang dikirim sebagai argumen ke fungsi lain, dan akan dipanggil kembali di dalamnya. Cara memanggil callback dilakukan melalui parameter pada fungsi lain.
 
Example:

```
// Named Callback Function
function functionX(parameter, callback) {
   callback();
}

function callback(parameter) { // Callback
   functionBody;
}

functionX(args, callback); // Callback Invocation

// Anonymous Callback 1: Function Declaration
function functionX(parameter, callback) {
   functionXBody;
   callback();
}

functionX(args, function(e) {  // Invocation
   callbackBody;
});

// The callback never get invoked
function functionX(parameter, callback) {
   functionXBody;
   // callback();
   // The callbackBody never get execution
}

functionX(args, function(e) {  // Invocation
   functionBody;
});
   
// Anonymous Callback 2: In setTimeout() Function
setTimeout(function() {
   console.log("Jalan setelah 2 detik");
}, 2000);
   
// Anonymous Callback 3: addEventListener() Method
document.addEventListener("click", function() {
   console.log("Kamu mengklik dokumen!");
})
   
// Anonymous Callback 4: forEach() Method
const angka = [1, 2, 3];
angka.forEach(function(item) {
   console.log(item);
});
   
// Anonymous Callback 4: map() Method
const kuadrat = [1, 2, 3].map(function(num) {
   return num * num;
});

console.log(kuadrat); // [1, 4, 9]
```

### 10. Async / Await Function
   
## Function as First-Class Citizen

Function di JavaScript adalah nilai yang bisa disimpan di variabel, dikirim sebagai argumen, atau dikembalikan dari function lain.

Example:

```
function greet() { console.log("Hi"); }
const say = greet; // Save in variable
say(); // Hi
```

## Function vs Arrow Function

Perbedaan penting dengan function biasa adalah arrow function tidak punya this sendiri, ia mewarisi this dari scope di atasnya. Kalau pakai function() biasa di dalam setTimeout, this akan berubah dan tidak lagi mengacu ke obj.

Example:

```
const obj = {
  nama: "Kukuh",
  sayHi: function() {
    setTimeout(() => {
      console.log("Hai " + this.nama);
    }, 1000);
  }
};

obj.sayHi(); // Output: Hai Kukuh
```

## Callback

Callback adalah sebuah function yang dikirim melalui argumen function atau method.

## Closure

Closure adalah sebuah konsep di mana fungsi dapat mengakses scope bagian luar fungsi.

Example:

```
function outer() {
  let count = 0;
  return function() {
    count++;
    console.log(count);
  };
}

const counter = outer();
counter(); // 1
counter(); // 2
```
## Anonymous

Anonymous adalah istilah yang merujuk kepada function yang tidak memiliki nama.

## Asynchronous

Asynchronous adalah proses menjalankan program dibalik layar tanpa menghentikan eksekusi program utama. JavaScript hanya punya 1 thread utama, tapi bisa menangani asynchronous task lewat event loop.

Example:

```
console.log("Mulai");
setTimeout(() => console.log("Tunggu 1 detik"), 1000);
console.log("Selesai");

// Output:
Mulai
Selesai
Tunggu 1 detik
```
## Parameters

### 1. General Parameter

General parameter adalah parameter yang umum digunakan saat mendeklarasikan sebuah fungsi. Perlu diingat bahwa pengiriman argumen ke parameter adalah berurutan. Jadi, jika kita mengirim argumen pertama ke sebuah fungsi, maka paramater yang akan menerima adalah parameter yang pertama.

### 2. Optional Parameter

### 3. Default Parameter

### 4. Rest Parameter

### 5. Object Parameter

### 6. Array Parameter

## Function Instance Methods

### bind() / Function.prototype.bind()

### call() / Function.prototype.call()

### apply () / Function.prototype.apply()