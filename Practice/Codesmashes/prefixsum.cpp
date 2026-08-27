#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,n;
    cin>>n;
    a=n;
    int ara[a];
    for(int i=0;i<n;i++)cin>>ara[i];
    for(int i=0;i<n;i++)cout<<ara[i]<<" ";cout<<endl;
    int sum[a];
    sum[0]=ara[0];
    for(int i=1;i<a;i++){
        sum[i]=ara[i]+sum[i-1];
    }
    for(int i=0;i<n;i++)cout<<sum[i]<<" ";
    
}