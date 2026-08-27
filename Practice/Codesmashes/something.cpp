#include <bits/stdc++.h>
using namespace std; 

void solve() {
    long double m;
    cin>>m;
    m=m/2;
    m=pow(m,2)*0.5*4;
    cout<<fixed<<setprecision(5)<<m<<endl;
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