#include <bits/stdc++.h>
using namespace std; 

void solve() {
    long long int n,k,x;
    cin>>n>>k>>x;
    long long int val=ceil(n*(n+1)/2);
if(k==x)cout<<"NO"<<endl;
if(val>=x)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}

int main() {
    int t;
    cin>>t;
    //int term=1;

    while(t--){

       //cout<<"Case "<<term<<": ";
        solve();
         //term++;
    }
    return 0;
}