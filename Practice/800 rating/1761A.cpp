#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int a,b,n;
    cin>>n>>a>>b;
   // cout<<(n-(a+b))<<endl;
    if(a==n&&b==n)cout<<"YES"<<endl;
    else if(a+b+2<=n)cout<<"YES"<<endl;
    //else if((n-a-b)>=2)cout<<"YES"<<endl;
    //else if(a+b==n)cout<<"YES"<<endl;
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