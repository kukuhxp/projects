# PROMISE

Promise adalah objek yang digunakan untuk menangani operasi asynchronous atau tidak langsung selesai seperti mengambil data dari server, membaca file, atau menunggu waktu tertentu Sederhananya, Promise adalah janji bahwa hasilnya akan tersedia nanti, bisa sukses, bisa gagal.

Syntax:

```
const promise = new Promise((resolve, reject) => {
  // Asynchronous
  const sukses = true;

  if (sukses) {
    resolve("Berhasil!");
  } else {
    reject("Gagal!");
  }
});

promise
  .then(result => {
    console.log(result); // If successful, "Success"
  })
  .catch(error => {
    console.log(error); // If failed, "Failed!"
  })
  .finally(() => {
    console.log("Selesai dijalankan");
  });
```

Example:

```
const tunggu = new Promise((resolve) => {
  setTimeout(() => {
    resolve("Waktu habis 2 detik!");
  }, 2000);
});

tunggu.then(pesan => console.log(pesan));

// Output
Waktu habis 2 detik!
```

## 3 Status Promise

1. Pending atau sedang berjalan.
2. Fulfilled atau resolve atau selesai sukses.
3. Rejected atau gagal.

## Promise Constructor Function

## Promise Static Properties

## Promise Static Methods

## Promise Instance Properties

## Promise Instance Methods