# CLICKJACKING

Clickjacking adalah teknik serangan di mana penyerang memanipulasi korban agar mengklik sesuatu yang berbeda dari yang mereka lihat, biasanya dengan cara menumpuk (overlay) elemen yang tidak terlihat di atas halaman yang terlihat normal.

Tujuan penyerang adalah membuat korban tanpa sadar menekan tombol tombol di aplikasi atau web, mengaktifkan kamera atau mikrofon

## Example

1. Kamu melihat tombol Get Gift Card, tapi sebenarnya klik itu menekan Like Page di Facebook.

2. Saat korban melakukan klik pada tombol di web, penyerang menyembunyikan iframe menuju https://example.com/settings/microphone/allow.

3. Kamu melihat tombol Check Discount, tapi yang diklik ternyata adalah tombol Buy atau Add to Cart.


## How It Works

1. Penyerang membuat halaman palsu dengan berisikan tombol Play Video.

2. Di atas tombol itu, penyerang menyembunyikan iframe transparan berisi situs asli misalnya Facebook, bank, atau setting browser.

3. Korban mengklik tombol Play yang sebenarnya mengklik tombol di iframe.

4. Aksi penting terjadi tanpa korban sadar.


## Prevention

Website harus menggunakan HTTP response header berikut:

### 1. X-Frame-Options

DENY = Tidak boleh di-embed di iframe.  
SAMEORIGIN = Hanya boleh di-embed oleh domain sendiri.

Contoh:

`X-Frame-Options: DENY`

### 2. Content-Security-Policy (CSP)

Dengan directive:

```
Content-Security-Policy: frame-ancestors 'none';
frame-ancestors https://domainmu.com;
```

### 3. Double Confirmation UI

Misalnya: “Are you sure?” sebelum aksi penting.