#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)cin>>ara[i];
    //a loop to check if it is already ok
    if(ara[0]==ara[n-1])cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<ara[n-1]<<" ";
        for(int i=0;i<n-2;i++){
            cout<<ara[i]<<" ";
        }
        cout<<ara[n-2]<<endl;
    }

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