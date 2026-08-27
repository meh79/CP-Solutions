#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(d>=b&&(a-b)>=(c-d)){
        int ans=(d-b)+(a+d-b)-c;
        cout<<ans<<endl;

    }
    else cout<<-1<<endl;

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