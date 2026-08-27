#include<bits/stdc++.h>
using namespace std;
int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    int ara[n];
    string s;
    cin>>s;
    for(int i=1;i<=n;i++){
        ara[i-1]=i;
    }
    for(int j=0;j<n;j++){
        if(s[j]='0') {
            swap(ara[j],ara[n-1]);
            break;
        }
    }
    for(int j=0;j<n;j++){
        cout<<ara[j];
    }
    cout<<endl;
}