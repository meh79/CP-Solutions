#include <bits/stdc++.h>
using namespace std;

// This function takes the array, the current index we are fixing, and the total size
void permute(int ara[], int index, int n) {
    // Base Case: If we have fixed all positions up to n, we print the array
    if (index == n) {
        for (int i = 0; i < n; i++) {
            cout << ara[i] << " ";
        }
        cout << "\n";
        return;
    }

    // Try placing every remaining element into the current 'index' position
    for (int i = index; i < n; i++) {
        // 1. Swap to put the element at the current position
        swap(ara[index], ara[i]);

        // 2. Recursively move to the next position
        permute(ara, index + 1, n);

        // 3. Backtrack: Swap back to restore the original array state
        swap(ara[index], ara[i]);
    }
}

int main() {
    int n = 10; // Using 3 elements here so your terminal doesn't crash from 3.6 million lines!
    int ara[] = {1, 2, 3,4,5,6,7,8,9,10};

    permute(ara, 0, n);

    return 0;
}