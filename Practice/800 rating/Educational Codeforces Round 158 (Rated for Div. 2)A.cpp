#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n,x;
    //n->gas station numbers
    //x->end point
    //0->beginning point
    //ara[n]->location of the gas stations

    cin>>n>>x;
    int i,ara[n];

    for(i=0;i<n;i++){
        cin>>ara[i];
    }
    int final_case=(x-ara[n-1])*2;
    int dis=ara[0];
    for(i=1;i<n;i++){
        if(dis<ara[i]-ara[i-1])dis=ara[i]-ara[i-1];
    }
    // cout<<"Max dis: "<<dis<<endl;
    // cout<<"Final case: "<<final_case<<endl;\

    if(dis>final_case)cout<<dis<<endl;
    else cout<<final_case<<endl;

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