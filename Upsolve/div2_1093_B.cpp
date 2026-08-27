#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; 
    cin>>n>>m;
    int ara[n];
    for(int i=0;i<n;i++)cin>>ara[i];

    int count=0;

    int val=1;
    int i=0;
    int safe=0;
    while(1){
         for(int j=0;j<n;j++)ara[j]=(ara[j]+1)%m;

         safe++;
         if(ara[0]!=0)break;
         if(safe==m)break;
    }
    for(int j=0;j<n;j++)cout<<ara[j]<<" ";
    while(val){
        if(ara[i]>0&&ara[i+1]==0){count++;i++;}
        else if(ara[i]==0){cout<<"NO"<<endl;break;}
        if(count==n){val=0;cout<<"YES"<<endl;break;}
        for(int j=0;j<n;j++)ara[j]=(ara[j]+1)%m;
       
    }
    cout<<"i value "<<i<<count<<endl;



}