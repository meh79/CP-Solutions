#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    int x;
    if(n<=10)cout<<n<<endl;
    else if(n<=100){
        cout<<n/10+9<<endl;
    }
    else if(n<=1000){
        cout<<n/100+10+8<<endl;
    }
    else if(n<=10000){
        cout<<n/1000+9+10+8<<endl;
    
    }
    else if(n<=100000){
        cout<<n/10000+9+9+10+8<<endl;
    }
    else if(n<=1000000){
        cout<<n/100000+9+9+9+10+8<<endl;
    }
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