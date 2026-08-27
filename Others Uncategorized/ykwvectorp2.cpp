#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin>>a;
    vector<int> aa(a);
    for(int i=0;i<a;i++){
        cin>>aa[i];
    }
    sort(aa.begin(),aa.end());
    for(int i=0;i<a;i++){
        if(i+1==a)cout<<aa[i];
        else cout<<aa[i]<<" ";
    }

    return 0;
}