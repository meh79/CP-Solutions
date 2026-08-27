#include <bits/stdc++.h>
using namespace std; 

void solve() {
    //a b c
    //a->anna
    //b->kettie
    //c->others

    // anna and katie will take turn one at a time
    int a,b,c;
    cin>>a>>b>>c; 
    
    if(c%2==0&&b>=a)cout<<"Second"<<endl;
    else if(c%2==0&&a>b)cout<<"First"<<endl;
    else if(c%2!=0){
        if(a>=b)cout<<"First"<<endl;
        else if(b>a)cout<<"Second"<<endl;
    }
    else cout<<"IN progress"<<endl;
    return;
}

int main() {
    int t;
    cin>>t;

    while(t--){

        solve();
    }
    return 0;
}