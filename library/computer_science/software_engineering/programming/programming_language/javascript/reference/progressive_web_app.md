# PROGRESSIVE WEB APP (PWA)

Progressive Web App (PWA) adalah aplikasi web yang bisa berperilaku seperti aplikasi native di Android/iOS/desktop.

Dengan kata lain, website yang bisa di-install, bisa bekerja offline, dan terasa seperti aplikasi asli.

## PWA's Characteristic

### 1. Dapat Di-install

Pengguna bisa menekan **Add to Home Screen”/** agar aplikasimu muncul seperti APK biasa.

### 2. Bisa Bekerja Offline

Karena PWA menggunakan Service Worker, yaitu script yang menyimpan cache dan data.
Ini membuat halaman tetap bisa digunakan tanpa internet.

### 3. Cepat dan ringan

PWA loading-nya cepat karena menyimpan file di cache.

### 4. Responsif

Bisa digunakan di semua layar: HP, tablet, desktop.

### 5. Akses native tertentu

PWA bisa memakai fitur perangkat seperti:

- Notifikasi push.
- Penyimpanan offline dengan menggunakan IndexedDB dan Cache Storage.
- File system API.
- Kamera.
- Geolocation.
- Background sync.

## PWA's Components

### 1. Manifest File

File berisi data aplikasi agar aplikasimu bisa di-install melalui web browser.

Example:

```
// Manifest file
{
  "name": "My PWA App",
  "short_name": "PWA",
  "start_url": "/",
  "display": "standalone",
  "icons": [
    {
      "src": "/icon.png",
      "sizes": "512x512",
      "type": "image/png"
    }
  ]
}
```

### 2. Service Worker

Script yang bekerja di background untuk caching file, push notification, offline mode.

Example:

```
self.addEventListener("install", event => {
  console.log("Service Worker terinstall");
});
```