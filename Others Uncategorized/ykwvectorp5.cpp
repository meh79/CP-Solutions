#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];

    }

    sort(a.begin(),a.end());
    //  for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";

    // }
    vector<long long> v1(a);
    v1.erase(unique(v1.begin(),v1.end()),v1.end());
    //  for(int i=0;i<v1.size();i++){
    //     cout<<v1[i]<<" ";

    // }
    int final_count=0;
    int count=0;
    for(int i=0;i<v1.size();i++){
        count=0;
        for(int j=0;j<a.size();j++){
            if(v1[i]==a[j])count++;
        }
        //cout<<v1[i]<<"->"<<count<<endl;
        if(count>=v1[i]) final_count=final_count-v1[i]+count;
        else final_count=final_count+count;
    }
    cout<<final_count<<endl;


}