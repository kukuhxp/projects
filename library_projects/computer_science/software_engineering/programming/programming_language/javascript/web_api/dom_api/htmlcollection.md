# HTML COLLECTION INTERFACE

HTMLCollection bukan array, tetapi objek mirip array atau **array-like object** yang berisi kumpulan elemen (element nodes) dari dokumen HTML.

Artinya, isinya memang kumpulan element node seperti <div>, <p>, <span>, dll. Tapi secara tipe data, HTMLCollection bukanlah array, jadi kamu tidak bisa langsung memakai semua metode array seperti .map(), .forEach(), atau .filter() kecuali dikonversi dulu.

Example:

```
// HTML
<div></div>
<div></div>
<div></div>
<div></div>
<div></div>

const divs = document.getElementsByTagName("div");

console.log(divs); // HTMLCollection
console.log(divs[0]); // First element
console.log(divs.length); // Element total (5 elements)

// If you want to use the array method
Array.from(divs).forEach(div => console.log(div));
```

## HTML Collection Instance Properties

### length / HTMLCollection.length

- Status: `Read-only`
- Value: `Number`

## HTML Collection Instance Methods

### item() / HTMLCollection.item()

- Parameters: `Index`
- Return Type: `Element Node`