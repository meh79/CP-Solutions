#include <bits/stdc++.h>
using namespace std; 

void solve() {
   long long int n,k;
    cin>>n>>k;
    if(n%2==0)cout<<"YES"<<endl;
    else if(n%k==0)cout<<"YES"<<endl;
    else if((n-k)%2==0)cout<<"YES"<<endl;
    else if((n-2)%k==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return;
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