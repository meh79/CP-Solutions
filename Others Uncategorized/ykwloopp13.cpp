#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        for(int j=s.size()-1;j>=0;j--){
            if(j==0)cout<<s[j];
            else 
            cout<<s[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}