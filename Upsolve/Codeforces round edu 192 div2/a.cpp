#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int k;
    cin>>k;
    int ara[k];
    for(int i=0;i<k;i++){
        cin>>ara[i];

    }
    int count=0;
    if(k==1&&ara[0]<=2)cout<<"NO"<<endl;
    else if(k==1&&ara[0]>2)cout<<"YES"<<endl;
    else {
        for(int i=0;i<k;i++){
            if(ara[i]>2){cout<<"YES"<<endl;
            return;}
            if(ara[i]==2)count++;
        }
        if(count>=2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
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