#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long int x,y;
        cin>>x>>y;
        //y>x && y%x=0
       long long int val=y/x;
       if((val-1)*x<y&&(val-1)*x>x)cout<<"YES\n";
       else cout<<"NO\n";
    }
    return 0;


}
