#include<bits/stdc++.h>
using namespace std;
const int N=10e5+10;
int ara[N];
int pp(int n,int mid,int i){
    if(n==mid)return 1;
    //else (n%2==0&&)
    if(ara[n-1]!=ara[i])return 0;

    return pp(n-1,mid,i+1);//recursiive logic e value increment decrement kore

}
int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)cin>>ara[i];
    if(pp(n,n/2,0))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}