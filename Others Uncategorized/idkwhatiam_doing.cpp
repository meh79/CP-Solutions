#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(1){
    int m,n;
    cin>>m>>n;
    int sum=0;
    if(m<=0||n<=0)return 0;

    if(m>n)swap(m,n);//m always choto
    for(int i=m;i<=n;i++){
        cout<<i<<" ";
        sum+=i;
    }
    cout<<"sum ="<<sum<<endl;
}
}