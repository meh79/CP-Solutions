#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    int ara[n];
    //cin>>ara[0];
    
    for(int i=0;i<n;i++){
        cin>>ara[i];
        

    }
    sort(ara,ara+n);
    if(gcd(ara[0],ara[1])<=2)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

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