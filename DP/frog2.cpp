#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;

    int ara[n];
    for(int i=0;i<n;i++)cin>>ara[i];

    vector<int> gg(n,0);

    gg[0]=0;
    gg[1]=abs(ara[1]-ara[0]);
    int minimum=INT_MAX;
    vector<int>dummy;
    for(int i=2;i<n;i++){
        for(int j=1;j<=k&&(i-j)>=0;j++){
           // cout<<"The value of i "<<i<<" && value of j "<<j<<endl;
            dummy.push_back(gg[i-j]+abs(ara[i-j]-ara[i]));
                      
        }
        gg[i]=*min_element(dummy.begin(),dummy.end());
        dummy.clear();
    }

   // for(auto x:gg)cout<<x<<" ";cout<<endl;
   cout<<gg[n-1]<<endl;

    return 0;
}