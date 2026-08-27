#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[8]={5,2,8,6,3,6,9,5};

    int n=8;

    vector<int> gg(n,1);
    for(int i=1;i<n;i++){
        for(int j=i;j>=0;j--){
            if(ara[j]<ara[i]){
                gg[i]=max(gg[i],gg[j]+1);
            }      
        }
    }

    for(auto x:gg)cout<<x<<" ";cout<<endl;

    cout<<*max_element(gg.begin(),gg.end())<<endl;
    
    int prev[8];
    fill(prev,prev+8,-1);   
    for(int i=1;i<n;i++){
        for(int j=0;j<=i;j++){
            if(ara[j]<ara[i])prev[i]=j;
        }
    }
    for(auto x:prev)cout<<x<<" ";cout<<endl;
    return 0;
}   