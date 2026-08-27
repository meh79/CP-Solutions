#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n, i;
    cin>>n;
    int ara[n];
    char c;
    for(i=0;i<n;i++){
        cin>>c;
        if(c=='.')ara[i]=1;
        else ara[i]=0;
    }

    //checking and packing answer code
    int val=1;
    if(ara[0]==1)val=1;
    else val=0;
    int ans=0;
    for(i=1;i<n;i++){
        if(ara[i-1]==ara[i]&&ara[i]!=0)val++;
        else if(ara[i-1]!=ara[i]&&ara[i]!=0){
            if(val>2){ans=2;break;}
            else ans=ans+val;   
            val=1;
        }
        
    }
    
    if(val>2)ans=2;
    else ans+=val;
    cout<<ans<<endl;
    
}   

int main() {
    int t;
    cin>>t;

    while(t--){

        solve();
    }
    return 0;
}