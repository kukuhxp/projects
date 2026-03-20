# GLOBAL INTERPRETER LOCK (GIL)

Global Interpreter Lock (GIL) adalah mekanisme pengunci yang memastikan hanya satu thread Python yang dapat mengeksekusi bytecode Python pada satu waktu dalam satu proses interpreter.

Walaupun kamu membuat banyak thread di Python, tetap saja hanya satu thread yang benar-benar berjalan pada satu waktu.

Kenapa Python punya GIL?, Karena implementasi CPython menggunakan memory management yang tidak thread-safe. GIL membuat semua operasi internal menjadi aman tanpa developer harus memikirkan race condition.

## Pros

1. Mempermudah pengembangan interpreter.

2. Menghindarkan programmer dari bug multithreading yang kompleks.

3. Library eksternal C bisa melepaskan GIL untuk performa tinggi.


## Cons

1. Multithreading Python tidak bisa memaksimalkan CPU multi-core untuk tugas CPU-bound.

2. Thread di Python cocok untuk I/O-bound task seperti network, file I/O, wait. Bukan untuk CPU-bound.

## Solve The Problem

### 1. Gunakan Multiprocessing

Setiap proses punya interpreter & GIL-nya sendiri yang bisa memanfaatkan banyak core.

Example:

```
from multiprocessing import Pool

def work(x):
    return x*x

with Pool() as p:
    print(p.map(work, range(10)))
```

### 2. Gunakan Library C

Example:

- NumPy

- TensorFlow

- PyTorch


### 3. Gunakan Implementasi Python Lain

Example:

- PyPy STM

- Jython

- IronPython