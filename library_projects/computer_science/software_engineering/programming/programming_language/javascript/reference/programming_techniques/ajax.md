# ASYNCHRONOUS JAVASCRIPT AND XML (AJAX)

Asynchronous JavaScript and XML (AJAX) adalah teknik dalam pengembangan web yang digunakan untuk mengambil atau mengirim data ke server tanpa harus memuat ulang seluruh halaman web. Dengan AJAX, website bisa terasa lebih cepat dan interaktif, mirip seperti aplikasi.

Biasanya, saat kamu kirim formulir atau ambil data dari server, browser akan reload halaman. Dengan AJAX, JavaScript dapat mengirim permintaan ke server di latar belakang, menerima respons, lalu mengubah isi halaman tanpa reload.

## Teknologi yang Digunakan AJAX:

1. JavaScript, logika utama untuk membuat permintaan.
2. XMLHttpRequest atau fetch(), alat untuk berkomunikasi dengan server.
3. Server-side script, PHP, Node.js, Python (Flask/Django), dll.
4. Format data, biasanya JSON, dulu sering XML.

## Example

Ketika tombol diklik, browser mengirim request ke server, kemudian server mengirim data JSON ke klien.

```
<button id="loadData">Ambil Data</button>
<div id="result"></div>

<script>
document.getElementById("loadData").addEventListener("click", async () => {
  const response = await fetch("https://jsonplaceholder.typicode.com/users/1");
  const data = await response.json();
  document.getElementById("result").textContent = `Nama: ${data.name}`;
});
</script>
```