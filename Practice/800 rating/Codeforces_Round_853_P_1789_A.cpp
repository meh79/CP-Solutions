#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    int ara[n];
    //cin>>ara[0];
    
    for(int i=0;i<n;i++){
        cin>>ara[i];
        

    }
    int ans=ara[0];
    for(int i=0;i<n;i++){
        //cin>>ara[i];
        if(ara[i]==1){
           // cout<<ara[i];
            cout<<"Yes1"<<endl;
            return;
            // for(int j=0;j<=i;j++){
            //     cout<<ara[j]<<" ";
            // }
            // cout<<endl;
            
        }
        //ans=gcd(ans,ara[i]);
        ans=gcd(ans,ara[i]);

    }
   // printf("n=%d ; gcd=%d\n",n,ans);
    if(ans<=2){cout<<"Yes"<<endl;return;}
    else cout<<"N}

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