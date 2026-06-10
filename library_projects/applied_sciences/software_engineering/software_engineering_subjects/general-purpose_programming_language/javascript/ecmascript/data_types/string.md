# STRING TYPES

## String Primitive Value

Example:

```
const variable = "Let's begin!";
const variable = 'He say "thank you"`;
```

## Template Literal

Template literal mendukung fitur multiple-line, sehingga kita dapat membuat string yang diikuti oleh garis baru.

Example:

```
const variable = `I'm going to workplace,
but I need to buy a food first`
```

## Interpolation

Example:

```
let a = 50000;
let b = 50000;
let str = `My balance is = ${a + b}` // My balance is 100000
```

## HTML Literal

Example:

`document.body.innerHTML = "<p>JavaScript</p>";`

## Char Literal

Example:

```
variable = "JavaScript";
variable[0]
```

## String Concatenation

Example:

```
"a" + 7 = a7

a = 2;
b = "buy";
c = a.concat(b); // 2buy
```

## String Global Function

Example:

```
// Number to String
let angka = 123;
let teks = String(angka);
console.log(teks);        // "123"
console.log(typeof teks); // "string"

// Boolean to String
let benar = true;
let hasil = String(benar);
console.log(hasil);        // "true"
console.log(typeof hasil); // "string"

// Null & Undefined
console.log(String(null));      // "null"
console.log(String(undefined)); // "undefined"

// Array/Object to String
console.log(String([1, 2, 3])); // "1,2,3"
console.log(String({a: 1}));    // "[object Object]"
```

## Falsy String

Example:

`variable = "";`

## String Static Methods

### raw()

- Parameters: `Strings, Sub N`
- Value: `String`

## String Instance Properties

### constructor / String.prototype.constructor

- Status: `Writable`
- Value: `Object`

## String Instance Methods

### charAt() / String.prototype.charAt()

- Parameters: `Index`
- Return Type: `String`

### concat() / String.prototype.concat()

- Parameters: `Object, String, Number`
- Return Type: `String`

### endsWith() / String.prototype.endsWith()

- Parameters: `String`
- Return Type: `Boolean`

### includes() / String.prototype.includes()

- Parameters: `String`
- Return Type: `Boolean`

### indexOf() / String.prototype.indexOf()

- Parameters: `String`
- Return Type: `Number`

### lastIndexOf() / String.prototype.lastIndexOf()

- Parameters: `String`
- Return Type: `Number`


### repeat() / String.prototype.repeat()

- Parameters: `Numbers`
- Return Type: String


### replace() / String.prototype.replace()

- Parameters: `Old String/RegEx, New String`
- Return Type: `String`
- Example:
   ```
   /*
    * To avoid case sensitive of replace() method,
    * you can use the RegExp flag.
    */
    
   string.replace("Some", "Replaced");
   
   // Using the insensitive flag of RegExp
   string.replace(/SOME/i, "Replaced");
   
   // Using the global match flag of RegExp
   string.replace(/some/g, "Replaced");
   ```

### search() / String.prototype.search()

- Parameters: `Regex`
- Return Type: `Numbers`

### slice() / String.prototype.slice()

- Parameters: `Start, End`
- Return Type: `String`

### split() / String.prototype.split()

- Parameters: `Separator/Whitespace, Limit`
- Return Type: `Array of Strings`

### startsWith() / String.prototype.startsWith()

- Parameters: `String`
- Return Type: `Boolean`

### substring() / String.prototype.substring()

- Parameters: `Start, End`
- Return Type: `String`
- Example:
   
```
/**
 * If the one of index is negative, the index becomes zero (0)
 * If the end index is negative, it swapped to start index
 */
    
string.substring(-5, 3); // 0, 3
   
/**
 * If the start index > end index,
 * the string is reversed. (3, -5) equivalent to (0, 3)
 */
    
string.substring(3, -5); // 3, 0
```

### toLowerCase() / String.prototype.toLowerCase()

- Parameters: `None`
- Return Type: `String`

### toString() / String.prototype.toString()

- Parameters: `None`
- Return Type: `String`

### toUpperCase() / String.prototype.toUpperCase()

- Parameters: `None`
- Return Type: `String`

### trim() / String.prototype.trim

- Parameters: `None`
- Return Type: `String`