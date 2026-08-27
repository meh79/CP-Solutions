#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n,c;
    cin>>n>>c;
    int ara[n],ara1[n];

    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    for(int i=0;i<n;i++){
        cin>>ara1[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(ara1[i]>ara[i])count++;
    }
    
    int sum=0;
    if(count>0){
        sort(ara,ara+n);
        sort(ara1,ara1+n);
        sum=c;
    
    
    }
    // cout<<"ara: ";
    // for(int i=0;i<n;i++)cout<<ara[i]<<" ";
    // cout<<endl;
    // cout<<"ara1: ";
    // for(int i=0;i<n;i++)cout<<ara1[i]<<" ";
    // cout<<endl;
    for(int i=0;i<n;i++){
        int store=ara[i]-ara1[i];
        if(ara1[i]>ara[i]){cout<<-1<<endl;return;}
        else sum+=store;
    }
    cout<<sum<<endl;
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