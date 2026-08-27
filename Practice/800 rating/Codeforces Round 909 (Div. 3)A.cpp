#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
//printf("%d '/' %d = %d\n",n,3,n%3); 
    if(n%3){
          
        cout<<"First"<<endl;
    }
    else cout<<"Second"<<endl;

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