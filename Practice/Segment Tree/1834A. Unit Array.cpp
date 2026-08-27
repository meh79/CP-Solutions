#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    int ara[n];
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        cin>>ara[i];
       sum+=ara[i];
       if(ara[i]==-1)count++;
    }
    int val=0;
    if(sum<0){
        sum=abs(sum);
        if(sum%2==0)val=sum/2;
        else val=abs(sum/2)+1;
    }
   // cout<<"val="<<val<<endl;
    if((count-val)%2==0)cout<<val<<endl;
    else cout<<val+1<<endl;
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