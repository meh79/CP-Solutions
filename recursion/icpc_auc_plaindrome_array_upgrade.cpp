#include<bits/stdc++.h>
using namespace std;
const int N=10e5+10;
int ara[N];

int pp(int left,int right){

    //base case 1
    if(left>=right)return 1;
    //base case 2
    if(ara[left]!=ara[right])return 0;

    //recursive case
    return pp(left-1,right+1);

}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++)cin>>ara[i];
    if(pp(n,0))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;

}