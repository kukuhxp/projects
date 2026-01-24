# EVENT DELEGATION

Event delegation adalah teknik menangani banyak event (misalnya klik pada banyak elemen anak) dengan satu event listener saja yang dipasang pada elemen induk.
Alih-alih memberi event listener ke setiap elemen kecil, kita memanfaatkan event bubbling — yaitu mekanisme di mana event akan naik (propagate) dari elemen target ke elemen induknya.

## Example

```
document.getElementById('list').addEventListener('click', function(event) {
  if (event.target.tagName === 'LI') {
    console.log('Item diklik:', event.target.textContent);
  }
});
```

## Explanation

Di sini hanya ada satu event listener di elemen #list, tapi bisa menangani semua klik pada `<li>` di dalamnya.

## Advantage

1. Lebih efisien, karena tidak perlu ribuan listener.
2. Mudah dipelihara.
3. Bekerja meskipun elemen baru ditambahkan secara dinamis.