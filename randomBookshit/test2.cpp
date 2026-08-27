#include <bits/stdc++.h>
using namespace std; 

void solve() {
    
}

int main() {

    int ara[]={1,2,3,5};
    int n=4;

    //logic hoitese sob kooytar xor kore ekta variable e rakha
    int x=0;
    for(int i=1;i<=5;i++){
        x=x^i;
    }
    //x has all the xor of the full array

    int x2=0;

    for(int i=0;i<n;i++){
        x=x^ara[i];
    }
    cout<<x;
    
}