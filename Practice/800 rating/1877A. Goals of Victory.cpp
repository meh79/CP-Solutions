#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    int ara[n-1];
    int sum=0;
    for(int i=0;i<n-1;i++){
        cin>>ara[i];
        sum+=ara[i];
    }
    // for(int i=0;i<n;i++)cout<<ara[i]<<" ";
    // cout<<endl;
    //cout<<sum<<endl;
    cout<<sum*(-1)<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--){

        solve();
    }
    return 0;
}