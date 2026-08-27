#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    int ara[n];
    cin>>ara[0];
    int ans=ara[0];
    for(int i=1;i<n;i++){
        cin>>ara[i];
        ans=ans^ara[i];
    }
    if(n%2==0){
        if(ans==0)cout<<0<<endl;
        else cout<<-1<<endl;
    }
    else cout<<ans<<endl;
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