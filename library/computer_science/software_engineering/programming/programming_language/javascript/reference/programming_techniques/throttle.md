# THROTTLE

Throttle adalah teknik pemrograman utmembuat fungsi tidak bisa dieksekusi terlalu sering, bahkan jika dipanggil berkali-kali.
Fungsi hanya akan dijalankan sekali setiap jangka waktu tertentu.

## Analogy

Bayangkan kamu menekan gas mobil berkali-kali dengan cepat — tapi sistem throttle membatasi agar mesin hanya menerima sinyal gas sekali setiap 1 detik, tidak peduli berapa kali kamu menekannya.

## Example

```
function throttle(func, delay) {
  let lastCall = 0;
  return function(...args) {
    const now = Date.now();
    if (now - lastCall >= delay) {
      lastCall = now;
      func(...args);
    }
  };
}

function onScroll() {
  console.log('Scroll event:', Date.now());
}

window.addEventListener('scroll', throttle(onScroll, 200));
```

## Explanation

Event scroll bisa terjadi ratusan kali per detik, tapi fungsi onScroll() hanya dijalankan maksimal 1 kali setiap 200 ms. Throttle digunakan:saat meng-handle event berat seperti scroll, resize, dan mousemove.