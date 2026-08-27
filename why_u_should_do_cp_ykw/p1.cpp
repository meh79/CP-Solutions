#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int g = __gcd(a, b);

    // Step 1: check basic possibility
    if (c % g != 0) {
        cout << "No\n";
        return 0;
    }

    // Step 2: reduce the equation
    a /= g;
    b /= g;
    c /= g;

    // Step 3: try to find non-negative solution
    // loop only up to b (much smaller than brute)
    for (int x = 0; x < b; x++) {
        if ((c - a * x) % b == 0) {
            cout << "Yes\n";
            return 0;
        }
    }

    cout << "No\n";
}