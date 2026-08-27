#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int count=1;
   // int n=0;//for vector/?
    vector<int> v;
    char c=s[0];
    for(int i=1;i<s.length();i++){
        if(s[i]==c)count++;
        else {
            v.push_back(count);
            count=1;
            c=s[i];
        }
    }
    
    v.push_back(count);
    // cout<<s<<endl;
    // for(auto x:v)cout<<x<<" ";
    // cout<<endl;

    //now odd even logic
    //bool ans=flase;
    int count_k=0;
    for(auto x:v){
        if(x%2!=0)count_k++;

    }
    if(count_k==0)cout<<"YES"<<endl;
    else {
        int val=count_k-k;
        if(val<=1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}