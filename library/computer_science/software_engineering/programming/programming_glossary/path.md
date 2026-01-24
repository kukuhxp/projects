# PATH

Path adalah alamat lengkap atau lokasi suatu file atau folder di dalam sistem file komputer.

## Relative Path Navigation

Relative Path Navigation adalah cara menavigasi atau merujuk file/folder dalam sistem file relatif terhadap lokasi file saat ini, bukan dari root atau lokasi absolut. Konsep ini umum digunakan dalam pemrograman, web development (HTML, CSS, JavaScript), dan sistem operasi.

### 1. Absolute Path

Absolute path adalah lokasi file lengkap dari root direktori.

Example:

```
// Absolute path in Linux OS
/home/kukuh/Documents/file.txt

// Absolute path in Windows:OS
C:\Users\Kukuh\Documents\file.txt
```

### 2. Relative Path

Relative path adalah lokasi file relatif terhadap file atau folder saat ini.

Example:

```
Project Folder
index.html
css/style.css
js/app.js
assets/images/logo.png

/**
 * Forward path
 * From index.html to style.css
 */
css/style.css

/**
 * Back forward path (one level)
 * From style.css to app.js
 */
../js/app.js

/**
 * Back forward path (two level)
 * From style.css to logo.png
 */
../../assets/images/logo.png
```

## Uniform Resources Locator (URL)

Uniform Resource Locator (URL) adalah alamat lengkap yang digunakan untuk mengakses sumber daya (resource) di internet, seperti halaman web, gambar, video, atau file lainnya.

Example:

`https://www.contoh.com/product view?id=12345&ref=google&utm_source=ads`

Structure:

Protocol = `https://`  
Subdomain = `www`  
Domain = `https://www.contoh.com`  
Top-level Domain (TLD) = `.com`  
Path = `/product/view`  
Query String = `?id=12345&ref=google&utm_source=ads`