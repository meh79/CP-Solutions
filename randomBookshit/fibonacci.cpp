#include <bits/stdc++.h>
using namespace std; 
int i=0;
int fib[40];

int solve(int n) {
    i++;    
    if (n == 1) return 0;
    if (n == 2) return 1;
    if(fib[n]!=0)return fib[n];
   

    fib[n]=solve(n-1)+ solve(n-2);
    return fib[n];
}

int main() {
    int n;
    cin>>n;
    cout<<solve(n)<<endl;
    cout<<"called "<<i<<endl;
    
    for(int j=1;j<40;j++){
        cout<<j<<"th fibonacci number "<<fib[j]<<endl;
    }
    

}