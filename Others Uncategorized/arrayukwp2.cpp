#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)cin>>ara[i];

    //checking palindrome
    int count=0;
    for(int i=0,j=n-1;i<n,j>=0;i++,j--){
        if(ara[i]==ara[j])count++;
    }
    if(count==n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}