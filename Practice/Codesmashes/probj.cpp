#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int vin=a+c;
    int el=b+d;
    if(vin<el)cout<<"Vinland"<<endl;
    else if(vin>el)cout<<"Eldia"<<endl;
    if(vin==el)cout<<"Bangladesh"<<endl;
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