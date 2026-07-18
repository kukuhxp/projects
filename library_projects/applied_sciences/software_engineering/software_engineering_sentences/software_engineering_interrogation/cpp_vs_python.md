# CPP vs Python

## Python Code

```
import time

start = time.time()

total = 0
for i in range(100_000_000):
    total += i

end = time.time()

print(total)
print("Waktu:", end - start, "detik")
```

## C++ Code

```
#include <iostream>
#include <chrono>

int main() {
    auto start = std::chrono::high_resolution_clock::now();

    long long total = 0;
    for (long long i = 0; i < 100000000; i++) {
        total += i;
    }

    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = end - start;

    std::cout << total << std::endl;
    std::cout << "Waktu: " << elapsed.count() << " detik" << std::endl;

    return 0;
}
```