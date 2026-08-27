#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n ;i++){
        cin>>ara[i];
    }
    int sw=0;
   //changging for nested loop
   for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(__gcd(ara[i],ara[j])<=2){
                sw=1;
                cout<<"YES"<<endl;
                return;
            }
        }
   }
    if(sw==0) cout<<"NO"<<endl;
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