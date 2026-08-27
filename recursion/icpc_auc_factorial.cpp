#include<bits/stdc++.h>
using namespace std;

long long int pp(long long int n){
    if(n==0)return 1;
    if(n==1)return 1;
    return pp(n-1)*n;
}

int main()
{
    long long int n;
    cin>>n;
    cout<<pp(n);
}