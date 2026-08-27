#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,t=0,s=0;
    cin>>a;
    vector<int> aa(a);
    for(int i=0;i<a;i++){
        cin>>aa[i];
       
    }
    cin>>s;
    // for(int i=0;i<a;i++){
    //     if(s==aa[i]){cout<<i<<endl; return 0;}
    // }
    cout<<"-1"<<endl;
    cout<<aa.front()<<endl<<aa.back()<<endl;
    return 0;

}