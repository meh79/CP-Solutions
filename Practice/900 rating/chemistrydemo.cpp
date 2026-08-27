#include <bits/stdc++.h>
using namespace std; 

void solve() {
    long long int n,k,x;
    cin>>n>>k>>x;

    long long int pre[n];
    pre[0]=1;
   
    ///for(int i=0;i<n;i++)cout<<pre[i]<<" ";cout<<endl;

    long long int a=k*(1+k)/2;//mininmuma
    long long int b=k*(2*n-k+1)/2;//this gives error

    if(x>=a&&x<=b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   // cout<<"Minimum "<<a<<endl<<"Maximum "<<b<<endl;
    return ;
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