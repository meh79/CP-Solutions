#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>\m;int a[n*m];
    for(int i=0;i<n*m;i++){
        cin>>a[i];
    }
    int num,val=0;
    cin>>num;
    for(int i=0;i<n*m;i++){
        if(a[i]==num)val++;
    }
    if(val)cout<<"will not take number\n";
    else cout<<"will take number\n";

    return 0;
}