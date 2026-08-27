#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)cin>>ara[i];

    vector<int> ara1;
    ara1.push_back(ara[0]);

    for(int i=1;i<n;i++){
        if(ara[i-1]<=ara[i]){ara1.push_back(ara[i]);}
        else {
            ara1.push_back(1);
            ara1.push_back(ara[i]);
        }
    }
    cout<<ara1.size()<<endl;
    for(int i=0;i<ara1.size();i++){
        if(i==ara1.size()-1)cout<<ara1[i]<<endl;
        else cout<<ara1[i]<<" ";
    }

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