#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        // vector<int> v(a);
        // for(int j=0;j<a;j++){
        //     cin>>v[j];
        // }
        // // for(auto x:v){
        // //     cout<<x<<" ";
        // // }
        // // cout<<endl;
        // sort(v.begin(),v.end());
        // // for(auto x:v){
        // //     cout<<x<<" ";
        // // }
        // // cout<<endl;

        int ara[a];
        for(int j=0;j<a;j++){
            cin>>ara[j];
        }
        count=0;
        for(int j=0;j<a;j++){
            if(j+1==a)break;
            else if((ara[j]%2==0&&ara[j+1]%2==0)||(ara[j]%2!=0&&ara[j+1]%2!=0)){
                cout<<"NO"<<endl;
                count=1;
                break;
            }
            
        }
        if(!count)cout<<"YES"<<endl;
    }
}