#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    for(int i=n-1;i>=0;i--){
        if(i==0)cout<<ara[i];
        else cout<<ara[i]<<" ";
    }
    cout<<endl;
    return 0;
}