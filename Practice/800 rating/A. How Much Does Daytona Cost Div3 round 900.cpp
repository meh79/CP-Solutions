#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n,k;
    cin>>n>>k;
    int ara[n],i,count_k=0;
    for(i=0;i<n;i++){
        cin>>ara[i];
        if(ara[i]==k)count_k++;
        

        //frequency array or structural frequency
        //lets make both
    }
    sort(ara,ara+n);

    // for(int j=0;j<n;j++)cout<<ara[j]<<" ";
    // cout<<endl;
    //searching for most time
    int count=1;
    for(int j=1;j<n-1;j++){
        if(ara[j-1]==ara[j])count++;
        else{
            if(count>count_k){
                cout<<"NO"<<endl;
                return;
            }
            count=1;
        }
    }
    if(count>count_k)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--){

        solve();
    }
    return 0;
}