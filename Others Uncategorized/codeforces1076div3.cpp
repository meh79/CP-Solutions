#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tt=0;tt<t;tt++){
        int n,s,x;
        cin>>n>>s>>x;
        int sum=0,ara[n];
        for(int i=0;i<n;i++){
            cin>>ara[i];
            sum+=ara[i];
        }
        if(sum>s)cout<<"NO"<<endl;
        else if(sum==s)cout<<"YES"<<endl;
        else if(sum<s){
            if((s-sum)%2==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
    }

    return 0;
}