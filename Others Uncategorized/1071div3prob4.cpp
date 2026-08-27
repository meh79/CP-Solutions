#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 13;

    // 8 bits (you can change size if needed)
    bitset<8> b(n);

    cout << b << endl; // prints: 00001101
     int ones = b.count(); // counts 1s
    cout << ones << endl; // prints: 3

      int ones3 = __builtin_popcount(n); // counts 1s
    cout << ones3 << endl; // prints: 3

    return 0;
}
