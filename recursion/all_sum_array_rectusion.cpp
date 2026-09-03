#include<bits/stdc++.h>
using namespace std;

const int N=1000+10;
int ara[N];
int pp(int n){
    //base case
    if(n==-1)return 0;
    
    //recursie case
    return ara[n]+pp(n-1);
}


int main(){
    int t;
    cin>>t;
   

    int term=1;
    while(t--){
         int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>ara[i];
        cout<<"Case "<<term<<": ";
        cout<<pp(n-1)<<endl;
        term++; 
    }

    return 0;
}