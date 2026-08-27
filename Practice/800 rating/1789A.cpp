#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    int ara[n];
    
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    // sort(ara,ara+n);
    int ans=ara[0];
    int val=0;
    for(int i=1;i<n;i++){
        ans=__gcd(ara[i],ans);
        cout<<ans<<" ";
        if(ans<=2){
            cout<<endl;
            cout<<"Ans= "<<ans<<endl;
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    return;

}

int main() {
    int t;
    cin>>t;
    int term=1;
    
    while(t--){

       cout<<"Case "<<term<<": ";
        solve();
         term++;
    }
    return 0;
}