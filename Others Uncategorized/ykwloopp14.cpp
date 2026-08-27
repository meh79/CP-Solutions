#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    //corner case
    if(a<=0||b<=0)return 0;

    if(a<b)swap(a,b);
    int sum=0;
    //  cout<<a<<endl<<b<<endl;
    for(int i=b;i<=a;i++){
        cout<<i<<" ";
        sum=sum+i;
    }
    cout<<"sum ="<<sum<<endl;
    return 0;
}