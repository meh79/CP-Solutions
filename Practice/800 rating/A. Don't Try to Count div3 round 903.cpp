#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n,m; //x[n], s[m];
    cin>>n>>m;
    string x,s;
    cin>>x>>s;
    int count=0,i=0,j;
   // cout<<"vitor dhukolo na"<<endl;
        while(x.find(s)==string::npos&&count<6){
            x+=x;
            count++;
        }
        if(count>5)cout<<"-1"<<endl;
        else 
        cout<<count<<endl;
        
    
        
    

    //else cout<<"-1"<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--){

        solve();
    }
    return 0;
}