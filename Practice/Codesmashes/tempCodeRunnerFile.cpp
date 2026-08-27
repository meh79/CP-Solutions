#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector<int> v(n),sum(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sum[0]=v[0];
    for(int i=1;i<n;i++){
        sum[i]=sum[i-1]+v[i];
    }
    // for(int i=0;i<n;i++){
    //     cout<<sum[i]<<" ";
    // }
    // cout<<endl;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a<2)cout<<sum[b-1]<<endl;
        else
        cout<<sum[b-1]-sum[a-2]<<endl;
    }

}