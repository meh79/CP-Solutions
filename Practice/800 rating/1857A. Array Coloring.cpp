#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)cin>>ara[i];
    int count=0,even=0;
    for(int i=0;i<n;i++){
        if(ara[i]%2==0)even++;
        else count++;
    }
    // cout<<"Count: "<<count<<endl;
    // cout<<"Even: "<<even<<endl;
    if(count%2==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return;
}

int main() {
    int t;
    cin>>t;

    while(t--){

        solve();
    }
    return 0;
}