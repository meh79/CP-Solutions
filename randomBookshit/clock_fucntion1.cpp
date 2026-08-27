#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

int main() {
    volatile int x;
    int n = 12345678;

    auto start = high_resolution_clock::now();

    for (long long i = 0; i < 1000000000LL; i++) {
        for (int j = 0; j < 10; j++) {
            x = n * 2;
        }
    }

    auto end = high_resolution_clock::now();

    auto duration =
        duration_cast<milliseconds>(end - start);

    cout << duration.count() << " ms\n";
}