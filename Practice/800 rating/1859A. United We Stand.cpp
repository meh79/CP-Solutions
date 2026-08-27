#include <bits/stdc++.h>
using namespace std; 


/*
idea
I will pick the latgest number that is not divisable by anymeans into a
others in c

*/
void solve() {
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)cin>>ara[i];
    
    //find the -1 case:
    //findint all equal array
    int pivot=ara[0];
    int co=0;
    for(int i=1;i<n;i++){
        if(ara[i]==pivot)co++;
    }
    if(co==n-1){
        cout<<"-1"<<endl;
        return;
    }
    sort(ara,ara+n);
    //find the large number
    int count=0,large;
    large=ara[n-1];
    vector<int> a,b;
    //now find how many larges are there
    for(int i=0;i<n;i++){
        if(ara[i]==large)b.push_back(ara[i]);
        else a.push_back(ara[i]);
    }
    cout<<a.size()<<" "<<b.size()<<endl;
    //cout<<"Printing a: ";
    for(auto x:a)cout<<x<<" ";
    cout<<endl;
    ///cout<<"Printing b: ";
    for(auto x:b)cout<<x<<" ";
    cout<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--){

        solve();
    }
    return 0;
}