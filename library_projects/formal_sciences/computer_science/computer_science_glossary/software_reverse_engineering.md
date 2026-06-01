# SOFTWARE REVERSE ENGINEERING (SRE)

Software Reverse Engineering (SRE) adalah proses menganalisis sebuah software untuk memahami cara kerjanya tanpa memiliki akses ke source code aslinya. Tujuannya adalah membongkar program dari bentuk biner/compiled agar bisa dipelajari struktur, logika, atau komponennya.

## Purpose

### 1. Security Analysis

Untuk mencari kerentanan atau vulnerability, dan memeriksa apakah sebuah program mengandung malware.

### 2. Compatibility

Membuat software baru agar bisa bekerja dengan software lama misalnya driver atau protokol lama.

### 3. Debugging

Ketika software legacy hilang source code-nya, reverse engineering membantu memahami cara memperbaikinya.


### 4. Crack & Modding

Membypass proteksi lisensi atau DRM, dan engubah perilaku program.

## How It Works?

### 1. Static Analysis

Menganalisis file tanpa menjalankannya, seperti melihat struktur PE/ELF, membaca disassembly dengan tools seperti IDA Pro, Ghidra, Radare2.

### 2. Dynamic Analysis

Menganalisis software saat berjalan, dan menggunakan debugger seperti x64dbg, OllyDbg, WinDbg. Selain itu memeriksa memory, register, function call.

### 3. Decompilation

Mengubah binary menjadi bentuk mirip source code agar lebih mudah dipahami.

## Tools

1. Ghidra
2. IDA Pro
3. x64dbg
4. OllyDbg
5. Radare2
6. Frida
7. JADX (Android-only)