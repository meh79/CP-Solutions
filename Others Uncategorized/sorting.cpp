#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s = "583294";
    sort(s.begin(), s.end());
    cout << "Smallest digit: " << s[0] << endl;
}
