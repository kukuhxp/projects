# OBJECT

## Object Literal

Example:
```
// Unassigned Object
let object = {}

// Assigned Object
let object = {
  key: value, // Property
  key: function() { // Method
    statements;
  }
}

// Using The Object's Key
object = {
  key: value,
  key: function () {
    statements;
  }
}

variable = object.property;
variable = object.method();

function(object.property);
function(object.method());
```

## This Keyword

Operator this pada object merupakan cara mengakses property atau method milik object. Penggunaan this harus berada di dalam object.

Example:

```
let object = {
  key: value,
  key: function() {
    this.key;
  }
}
```

## Object Index

Example:

```
let object = {
  name: "John",
  country: "U.S.A",
  0: "I like it",
  1: "Disklike it"
}

variable = person["name"];
variable = person["country"];

function(person["name"]);
function(person["country"]);
```

## Nested Property

Example:

```
let object = {
  key: key {
    key: function() {
      statements;
    }
  }
}

function(object.object.method());
```

## Object Destructuring

## Automatic Global Object

JavaScript menentukan this secara otomatis berdasarkan cara function dipanggil.

Example:

```
function showThis() { console.log(this); }

showThis();           // this (window)
obj = { showThis };
obj.showThis();       // this (obj)
```

## Object Constructor Function

Example:

```
const user = new Object();
user.name = "Kukuh";
user.age = 25;
```
## Object Static Methods

### keys() / Object.keys()

### values() / Object.values()

### entries() / Object.entries()
