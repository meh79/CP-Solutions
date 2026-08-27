#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int ara[n+1];
    ara[0]=0;
    for(int i=1;i<=n;i++){
        cin>>ara[i];
        ara[i]=ara[i]+ara[i-1];
        //cout<<ara[i]<<" ";
    }
    //
    cout<<endl;
    int a,b;
    for(int j=0;j<q;j++){
        cin>>a>>b;
        cout<<ara[b]-ara[a-1]<<endl;
    }
    return 0;
}