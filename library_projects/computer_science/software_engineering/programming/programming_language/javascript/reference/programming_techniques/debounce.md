# DEBOUNCE

Debounce adalah teknik pemrograman yang digunakan untuk menunda eksekusi suatu fungsi sampai setelah beberapa waktu tertentu sejak terakhir kali fungsi itu dipanggil.

Tujuannya adalah untuk menghindari pemanggilan fungsi berulang-ulang dalam waktu singkat, terutama saat menangani event yang sering terjadi, seperti scroll, resize, keyup, mousemove.

## Case

Kamu ingin menjalankan fungsi ketika pengguna mengetik di kolom pencarian, tapi kamu tidak mau fungsi itu dijalankan setiap kali pengguna menekan satu huruf.

## Example

```
function debounce(func, delay) {
  let timer;
  return function(...args) {
    clearTimeout(timer);
    timer = setTimeout(() => func.apply(this, args), delay);
  };
}

const searchInput = document.getElementById('search');
searchInput.addEventListener('input', debounce(() => {
  console.log('Melakukan pencarian...');
}, 500));
```

## Explanation

Setiap kali pengguna mengetik, fungsi debounce akan menghapus timer sebelumnya (clearTimeout), kemudian menyetel timer baru (setTimeout).

## Result

fungsi console.log('Melakukan pencarian...') hanya dijalankan 500ms setelah pengguna berhenti mengetik.