#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int c1=0,c0=0;
        int ara[n];
        for(int j=0;j<n;j++){
            cin>>ara[j];
            if(ara[j]==1)c1++;
            else if(ara[j]==0)c0++;
        }
        
        if(c0==1){cout<<"YES"<<endl;}
        else if(c0>=2&&c1>=1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}