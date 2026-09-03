#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    sort(v.begin(),v.end());
    // for(auto x:v)cout<<x<<" ";
    // cout<<endl;
    int sum=0;
   // for(int i=0;i<n;i++)sum+=v[i];
   // int count=1;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(v[i]==v[j]){v[i]=0;v[j]=0;break;}
    }
   }
//    for(auto x:v)cout<<x<<" ";
//    cout<<endl;
   for(int i=0;i<n;i++)sum+=v[i];
   cout<<sum<<endl;

}