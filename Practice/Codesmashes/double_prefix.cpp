#include<bits/stdc++.h>
using namespace std;
// void solve(){
//     int 
// }
int main(){
    int n;
    cin>>n;
    vector<long long int> ara(n),ara1(n),sum(n),sum1(n);
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    sum[0]=ara[0];
    for(int i=1;i<n;i++){
        sum[i]=sum[i-1]+ara[i];
    }

    ara1=ara;
    sort(ara1.begin(),ara1.end());
    sum1[0]=ara1[0];
    for(int i=1;i<n;i++){
        sum1[i]=sum1[i-1]+ara1[i];
    }


    // for(int i=0;i<n;i++)cout<<ara[i]<<" ";cout<<endl;
    // for(int i=0;i<n;i++)cout<<ara1[i]<<" ";cout<<endl;
    // for(int i=0;i<n;i++)cout<<sum[i]<<" ";cout<<endl;
    // for(int i=0;i<n;i++)cout<<sum1[i]<<" ";cout<<endl;
   int t;
   cin>>t;
    while(t--){
        int tt;
        cin>>tt;
        int l,r;
        cin>>l>>r;
        if(tt==1){
        if(l<2)cout<<sum[r-1]<<endl;
        else cout<<sum[r-1]-sum[l-2]<<endl;}
        else if(tt==2){
            if(l<2)cout<<sum1[r-1]<<endl;
        else cout<<sum1[r-1]-sum1[l-2]<<endl;
        }
    }
}

