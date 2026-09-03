#include <iostream>

using namespace std;

void printTree(int n) {
    // Base Case: Stop when n hits 0 so the program doesn't run forever
    if (n <= 0) {
        return;
    }

    // 1. Print the current number
    cout << "Number: " << n << endl;

    // 2. Tree Recursion: The function calls itself TWO times
    printTree(n - 1); // Left branch
    printTree(n - 1); // Right branch
}

int main() {
    // Start the recursion with the number 3
    printTree(3);
    return 0;
}
 