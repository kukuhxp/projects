# BUG VS ERROR

## Bug

Bug adalah kesalahan dalam kode atau desain program. Bug ada di dalam program, bahkan sebelum dijalankan yang menyebabkan program berperilaku tidak seperti yang diharapkan.

Example 

```
function tambah(a, b) {
  return a - b; // This is a bug, the code shoud be a + b, because it's the number addiction.
}
```

## Error

Error adalah kejadian yang membuat program berjalan gagal atau menghasilkan hasil salah. Error bisa disebabkan oleh bug, input salah, resource tidak tersedia, dll.

Example:

`JSON.parse("bukan json"); // SyntaxError`