#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)cin>>ara[i];

    int sum=0;
    for(int i=n/2;i<n;i++)sum+=ara[i];
    cout<<sum<<endl;
}