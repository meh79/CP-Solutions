#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int dp[N];

int func(int n){
    int ara[n];
    
    if(n==0) return 0;
    if(n==1||n==2) return 1;
    
    return dp[n]=func(n-1)+func(n-2);

    
}

int main(){
    memset(dp,-1,sizeof(dp));
    dp[0]=0;
dp[1]=1;
dp[2]=1;
    int n;
    cin>>n;
    func(n);

    for(int i=0;i<n;i++){
        cout<<dp[i]<<endl;
    }
}