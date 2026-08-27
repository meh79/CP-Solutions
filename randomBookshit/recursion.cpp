#include <bits/stdc++.h>
using namespace std; 
int i;
int solve(int n) {i++;
    if(n==1||n==2)return 1;

    return solve(n-1)+ solve(n-2);
}

int main() {
    int n;
    cin>>n;
    cout<<solve(n)<<endl;
    cout<<"Called "<<i<<endl;
    

}