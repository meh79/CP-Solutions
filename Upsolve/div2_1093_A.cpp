#include<bits/stdc++.h>
using namespace std;
void cp(){


    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> uni;
    for(int i=0;i<n;i++){
        cin>>v[i];


    }


    sort(v.begin(), v.end());
    uni=v;
    

    auto it=unique(uni.begin(),uni.end());
    uni.erase(it, uni.end());

    if(uni!=v){cout<<"-1"<<endl;return;}


    sort(v.begin(),v.end(), greater<int>());
    for(int i=0;i<n;i++){
        if(i==n-1)cout<<v[i];
        else cout<<v[i]<<" ";
    }   
    cout<<endl;
}

int main(){
    int a;
    cin>>a;
    while(a--)cp();

    return 0;
}