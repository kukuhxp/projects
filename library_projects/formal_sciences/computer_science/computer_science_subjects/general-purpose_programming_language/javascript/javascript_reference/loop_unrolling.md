# LOOP UNROLLING

Loop unrolling atau loop unwinding adalah teknik optimasi dalam pemrograman untuk mengurangi jumlah iterasi loop dengan menyalin isi loop beberapa kali di dalam satu iterasi.

Tujuannya adalah untuk meningkatkan performa dengan mengurangi overhead kontrol loop, seperti pengecekan kondisi (i < n) peningkatan variabel (i++), dan lompatan instruksi (branching).

Biasanya, setiap kali loop berjalan, komputer harus mengecek kondisi loop, lalu menambah variabel penghitung, kemudian melompat ke awal loop lagi. Proses ini menambah sedikit waktu.

Dengan unrolling, kita menggabungkan beberapa iterasi sekaligus agar langkah-langkah itu lebih jarang dilakukan.

## Example

```
/**
 * Before Unrolling
 * This loop performs 8 iterations:
 */
 
for (int i = 0; i < 8; i++) {
    a[i] = a[i] * 2;
}

// After Loop Unrolling (example unroll 4x)
for (int i = 0; i < 8; i += 4) {
    a[i] = a[i] * 2;
    a[i + 1] = a[i + 1] * 2;
    a[i + 2] = a[i + 2] * 2;
    a[i + 3] = a[i + 3] * 2;
}

/**
 * The loop only iterates 2 times, because i increases by 4 each time,
 * but 4 elements are processed per iteration.
 */
```

## Advantage

1. Mengurangi overhead loop, karena lebih sedikit pengecekan kondisi dan cabang.
2. Dapat meningkatkan kecepatan, terutama pada kode yang dijalankan berulang-ulang.
3. Bisa memanfaatkan CPU pipeline dan SIMD lebih efisien.

## Disadvantage:

1. Ukuran kode jadi lebih besar.
2. Sulit dibaca dan dipelihara jika dilakukan manual.
3. Tidak selalu memberi peningkatan performa.

## Note

Sebagian besar compiler modern seperti GCC, Clang, atau LLVM sudah bisa melakukan loop unrolling secara otomatis saat optimization level tinggi, misalnya -O2 atau -O3.