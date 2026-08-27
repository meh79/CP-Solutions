#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;//tower
    cin>>n;
    int ara[n],i;//hieght of tower

    for(int i=0;i<n;i++)cin>>ara[i];
    int low=ara[0];
    if(n==1){cout<<ara[0]<<endl;return;}
    int val=ara[0];
    for(i=1;i<n;i++){
        if(low>ara[i])low=ara[i];
        val=val+low;
    }
    cout<<val<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--){

        solve();
    }
    return 0;
}