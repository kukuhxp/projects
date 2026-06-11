# SORTING ALGORITHM

Sorting algorithm adalah algoritma yang digunakan untuk menyusun elemen dalam urutan tertentu, biasanya dari yang terkecil ke terbesar (ascending) atau terbesar ke terkecil (descending).

## Bubble Sort

Bubble sort adalah algoritma pengurutan sederhana yang bekerja dengan membandingkan elemen bersebelahan dan menukarnya jika urutannya salah, hingga seluruh elemen tersusun rapi.

## Merge Sort

Merge sort adalah algoritma divide and conquer yang membagi array menjadi bagian-bagian kecil, menyortir masing-masing, lalu menggabungkannya secara terurut.

## Quick Sort

Quick sort adalah algoritma divide and conquer yang sangat efisien untuk sorting. Berbeda dengan Merge Sort yang selalu membagi di tengah, Quick Sort memilih elemen sebagai pivot, lalu memisahkan data menjadi elemen yang lebih kecil dari pivot, elemen yang lebih besar dari pivot. Kemudian, proses diulang secara rekursif di kiri dan kanan pivot.

## Heao Sort

Heap sort adalah algoritma pengurutan berbasis struktur data heap, yaitu binary tree yang memenuhi sifat max-heap atau min-heap.
Max-heap adalah setiap node induk lebih besar dari anak-anaknya sedangkan min-heap adalah setiap node induk lebih kecil dari anak-anaknya. Heap Sort bekerja dengan membangun heap, lalu menghapus elemen terbesar satu per satu dan menempatkannya di akhir array.

## Counting Sort

Counting sort adalah algoritma pengurutan yang bekerja tanpa membandingkan elemen. Algoritma ini menghitung frekuensi tiap elemen, lalu menyusunnya berdasarkan jumlah kemunculannya. Sangat efisien untuk data integer dan rentang nilai.

## Radix Sort

Radix sort adalah algoritma pengurutan non-comparative yang mengurutkan angka berdasarkan digit per digit, dimulai dari digit terendah atau Least Significant Digit (LSD) hingga tertinggi atau Most Significant Digit (MSD).

Berbeda dengan algoritma seperti Quick Sort atau Merge Sort yang membandingkan antar elemen, Radix Sort bekerja dengan mengelompokkan elemen berdasarkan digit tertentu dan mengurutkannya menggunakan algoritma stable seperti Counting Sort.

## Bucket Sort

Bucket sort adalah algoritma pengurutan non-comparative yang bekerja dengan cara membagi elemen ke dalam beberapa bucket berdasarkan rentang nilainya, mengurutkan masing-masing bucket secara individual, menggabungkan seluruh bucket menjadi satu array hasil akhir yang terurut.

## Selection Sort

Selection sort adalah algoritma pengurutan sederhana yang bekerja dengan mencari elemen terkecil atau terbesar dari array, lalu menukarnya ke posisi yang tepat. Proses ini diulang untuk seluruh array.

## Insertion Sort

Insertion sort adalah algoritma pengurutan sederhana yang bekerja dengan cara menyisipkan elemen satu per satu ke posisi yang benar di bagian array yang sudah terurut.