# DOCUMENT OBJECT MODEL (DOM)

Document Object Model (DOM) adalah struktur data berbentuk pohon (tree) yang merepresentasikan seluruh elemen dan isi dalam halaman HTML sebagai objek-objek yang bisa diakses dan dimanipulasi dengan JavaScript.

## DOM API Leveling

DOM API Leveling adalah pembagian API DOM ke dalam beberapa level atau tingkatan, yang merepresentasikan evolusi dan penambahan fitur DOM dari waktu ke waktu. Berikut ini adalah riwayat dari DOM API leveling:

1. DOM Level 0

    Akses dasar ke elemen HTML dan event handler seperti onclick, document.forms, dll. Bawaan browser lama.

2. DOM Level 1

   Standar pertama (1998) untuk struktur dokumen dan manipulasi node (seperti getElementById, createElement).

3. DOM Level 2

   Menambahkan support untuk event model modern, CSS, range, dan traversal API.
   
3. DOM Level 3

   Menambahkan kemampuan load & save dokumen, manipulasi namespace, dan dukungan XPath.
   

4. DOM Living Standard

   Sekarang dikembangkan oleh WHATWG, dan terus diperbarui secara langsung (tidak lagi versi DOM Level 4, dst). Termasuk fitur modern seperti querySelector, classList, textContent, dsb.