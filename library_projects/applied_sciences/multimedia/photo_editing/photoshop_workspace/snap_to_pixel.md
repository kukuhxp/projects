# SNAP TO PIXEL

Snap to Pixel adalah fitur yang membuat objek tepat pada grid pixel agar hasilnya tajam, tidak blur, dan tidak berada di posisi pecahan pixel. Fitur ini penting untuk UI design, icon, dan ilustrasi vektor supaya garis-garis terlihat bersih.

## How to Make It Active?

### 1. Snap Vector Tools to Pixel Grid

- Pilih **Edit**.
- Lalu pilih **Preferences**.
- Lalu pilih**General**.
- Centang pada **Snap Vector Tools and Transforms to Pixel Grid**.

### 2. Pixel Grid Snapping

Ketika memakai Rectangle Tool / Ellipse Tool / Pen Tool. pada top bar aktifkan **Snap Vector Tools to Pixel Grid**.

### 3. Snap in Transforming Object

Ketika transform (Ctrl+T) atau Move Tool, pastikan koordinat X/Y atau Width/Height adalah bilangan bulat.

## Why is The Image Blurred?

Karena shape atau garis berada di posisi fractional pixel. Misal garis 1px berada di posisi X = 10.5 px, Photoshop harus interpolasi warna, dan hasilnya blur.