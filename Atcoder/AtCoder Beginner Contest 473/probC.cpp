#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int n,k;
    cin>>n>>k;
    vector<long long int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //sort kora
    sort(v.begin(),v.end());
    //sorted array print kora
   // for(auto x:v)cout<<x<<" ";cout<<endl;

    //frequency without root value vector create
    vector<long long int>cc;
    int count=1;
    for(int i=1;i<n;i++){
        if(v[i-1]==v[i])count++;
        else{
            cc.push_back(count);
            count=1;

        }
        
    }
    cc.push_back(count);
    //completion of cc vector

    //printing cc vector
   // for(auto x:cc)cout<<x<<" ";cout<<endl;

    //highest 
    int high=0;
    for(auto x:cc){
        if(x>high)high=x;
    }
    //counting high how many
    int high_count=0;
    for(auto x:cc){
        if(x==high)high_count++;
    }


    int second_high=0;
    //second high
    for(auto x:cc ){
        if(x>second_high&&x!=high)second_high=x;

    }

    //second high count
    int sec_high_count=0;
    for(auto x:cc){
        if(x==second_high)sec_high_count++;
    }
    
    // cout<<"High count "<<high_count<<endl;
    // cout<<"Second high "<<sec_high_count<<endl;
    if(high-second_high==1){
        cout<<high_count+sec_high_count<<endl;
    }
    else cout<<high_count<<endl;
}