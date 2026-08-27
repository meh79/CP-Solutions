#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,W;
    cin>>N>>W;

    vector<long long> weight(N+1);
    vector<long long> value(N+1);

    for(int i=1;i<N;i++){
        cin>>weight[i]>>value[i];
    }

    vector<vector<long long>> dp(N+1, vector<long long>(W+1,0));

    for(int i=1;i<=N;i++){
        for(int w=0;w<=W;w++){
            if(weight[i]<=w){
                dp[i][w]=max(dp[i-1][w],value[i]+dp[i-1][w-weight[i]]);
            }
            else {
                dp[i][w]=dp[i-1][w];
            }
        }
    }

    cout<<dp[N][W]<<endl;
    return 0;
}