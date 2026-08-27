#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;cin>>n;
    int ara[n];
    for(int i=0;i<n ;i++){
        cin>>ara[i];
    }
    int count=0;
    for(int i=1;i<n;i++){
        if((ara[i]%2==0)&&(ara[i-1]%2==0))count++;
        else if((ara[i]%2!=0)&&(ara[i-1]%2!=0))count++;
    }
    cout<<count<<endl;
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