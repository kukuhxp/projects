# OBJECT VS CONSTRUCTOR

Perbedaan object dan constructor function di JavaScript terletak pada cara pembuatannya dan tujuannya.

## Object Literal

Object literal adalah cara langsung membuat objek, biasanya dipakai untuk membuat satu objek saja.

Example:

```
// Object literal
const user = {
  name: "Kukuh",
  age: 25,
  sayHello: function() {
    console.log("Halo, " + this.name);
  }
};

user.sayHello(); // Halo, Kukuh
```

### Ciri-ciri Object Literal

1. Tidak perlu new.
2. Dipakai untuk membuat satu instance unik.
3. Tidak bisa dijadikan template untuk objek lain secara langsung.

## Constructor Function

Constructor function digunakan untuk membuat banyak objek (instance) dengan struktur yang sama. Harus diawali huruf kapital dan dipanggil pakai keyword new.

Example:

```
// Constructor function
function User(name, age) {
  this.name = name;
  this.age = age;
  this.sayHello = function() {
    console.log("Halo, " + this.name);
  };
}

// Creating some instance
const user1 = new User("Kukuh", 25);
const user2 = new User("Dina", 22);

user1.sayHello(); // Halo, Kukuh
user2.sayHello(); // Halo, Dina
```

### Ciri-ciri Constructor Function

1. Dipanggil dengan new.
2. Bisa digunakan untuk membuat banyak objek serupa.
3. Nilai this mengacu ke objek baru yang dibuat.
4. Umumnya digunakan sebelum adanya sintaks class.

## Classes

Sejak ES6, JavaScript punya class, yang sebenarnya hanyalah syntactic sugar dari constructor function.

Example:

```
class User {
  constructor(name, age) {
    this.name = name;
    this.age = age;
  }

  sayHello() {
    console.log("Halo, " + this.name);
  }
}
```