#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)cin>>ara[i];

    vector<int> gg(n+1,0);
    gg[0]=0;
    gg[1]=abs(ara[1]-ara[0]);

    for(int i=2;i<n;i++){
        int way1=gg[i-1]+abs(ara[i]-ara[i-1]);
        int way2=gg[i-2]+abs(ara[i]-ara[i-2]);
        gg[i]=min(way1,way2);    
    }
    cout<<gg[n-1]<<endl;
    //for(auto x:gg)cout<<x<<" ";
    //cout<<endl; 
    return 0;
}