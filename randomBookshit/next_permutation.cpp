#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 10;
    int ara[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // We sort first to ensure we start from the very first permutation
    sort(ara, ara + n);

    // This built-in function handles the logic for us
    do {
        for(int i = 0; i < n; i++) {
            cout << ara[i] << " ";
        }
        cout << "\n";
    } while (next_permutation(ara, ara + n));

    return 0;
}