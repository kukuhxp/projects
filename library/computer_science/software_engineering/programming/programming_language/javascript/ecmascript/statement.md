# STATEMENT

Statement atau pernyataan adalah instruksi lengkap yang memberi tahu mesin JavaScript untuk melakukan suatu tindakan tertentu.

Setiap statement biasanya diakhiri dengan titik koma (;), meskipun JavaScript memiliki fitur Automatic Semicolon Insertion (ASI) yang menambahkannya otomatis.

Example:

```
let x = 10;         // Declaration and initialization statements
x = x + 5;          // Assignment statement
console.log(x);     // Function call statement

// Each of the lines above is a statement because they all perform an action.
```

## Jenis-jenis Statement

### 1. Declaration Statement

Digunakan untuk mendeklarasikan variabel, fungsi, atau class.
   
Example:
   
```
let name = "Kukuh";

function greet() { console.log("Halo!"); }
```

### 2. Expression Statement

Ekspresi yang menghasilkan nilai dan biasanya diakhiri titik koma.
   
Example:
   
```
x + y; // This is a statement.
x + y // This is a expression.
```
   
### 3. Conditional Statement

Digunakan untuk pengambilan keputusan.
   
Example:
   
```
if (x > 10) {
   console.log("Lebih besar dari 10");
} else {
   console.log("10 atau kurang");
} 
```
### 4. Looping statement

Mengulang blok kode berkali-kali.
   
Example:

```
for (let i = 0; i < 5; i++) {
  console.log(i);
} 
```
   
### 5. Control Flow Statement

Mengubah alur eksekusi program.

Example: 

```
break;
continue;
return;
throw new Error("Terjadi kesalahan");
```
   
## Automatic Semicolon Insertion (ASI)

Automatic Semicolon Insertion (ASI) adalah fitur bawaan JavaScript yang secara otomatis menambahkan titik koma (;) di tempat yang dianggap perlu, jika kamu tidak menulisnya sendiri.

Tujuannya adalah agar kode JavaScript tetap bisa berjalan walau kamu lupa menulis ; di akhir statement.

Example:

```
let x = 5
let y = 10

console.log(x + y)

// But JavaScript adds semicolons automatically like this:

let x = 5;
let y = 10;

console.log(x + y);

// So that it can still run normally.
```

### Kapan ASI bekerja:

1. Saat interpreter membaca baris baru.
1. Baris sebelumnya adalah ekspresi yang bisa diakhiri dengan ;.
2. Tidak ada tanda yang membuat JavaScript menunggu kelanjutan ekspresi.

Example:

```
a = b + c
d = e + f

/**
 * After c, JavaScript sees the end of the expression, so it adds ; automatically,
 * but be careful, ASI can cause bugs!, because JavaScript sometimes guesses your intentions wrongly.
 */
 
return
{
  name: "Kukuh"
}

// You might expect to return an object, but what happens is:
return; // ASI adds a semicolon here!
{
  name: "Kukuh"
}

/**
 * The result is that the function returns undefined,
 * not an object.  So the correct way is
 */

return {
  name: "Kukuh"
};

/**
 * ASI is not always safe when using
 * return, break, continue, throw, and starting a new line with (, [, /, +, or -).
 */

// Another bug
let x = 10
let y = x

(x + 1).toString()

// JavaScript assumes:
let x = 10;
let y = x(x + 1).toString();
```