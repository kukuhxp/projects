# ASYNC / AWAIT

async/await adalah fitur di JavaScript yang membuat penulisan kode asynchronous menjadi jauh lebih mudah dibaca dan ditulis, mirip seperti kode synchronous atau berjalan berurutan, padahal tetap berjalan secara non-blocking.

## Async

Async adalah keyword untuk menandai bahwa sebuah fungsi selalu mengembalikan Promise. Jadi fungsi async selalu mengembalikan Promise.

Example:

```
async function contoh() {
  return "Halo";
}

// Equivalent
Promise.resolve("Halo")
```

## Await

Await digunakan di dalam fungsi async untuk menunggu sebuah Promise selesai, tanpa memakai .then(). Jadi await membuat kode terlihat seperti synchronous, padahal tetap async di belakang layar.

Example:

```
async function contoh() {
  const result = await fetchData();
  console.log(result);
}
```