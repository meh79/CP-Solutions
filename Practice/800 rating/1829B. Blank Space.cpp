#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    int ara[n];
    int count=0;
    for(int i=0;i<n;i++){cin>>ara[i];if(ara[i]==0)count++;}
    if(count==0){cout<<"0"<<endl;return;}
    int first=ara[0];
    count=1;
    int max=0;
    for(int i=1;i<n;i++){
        if(ara[i]==ara[i-1]&&ara[i]==0)count++;
        else {
            if(count>max)max=count;
            count=1;
        }
    }if(count>max)max=count;

    cout<<max<<endl;
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