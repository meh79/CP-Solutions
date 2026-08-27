#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int x,y;
    cin>>x>>y;
    if(y>x)cout<<"NO"<<endl;
    else if(x==y)cout<<"YES"<<endl;
    else if(x%y==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


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