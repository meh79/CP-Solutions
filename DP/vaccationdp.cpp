#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> gg(n, vector<int>(3,0));
    int ara[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++){
            cin>>ara[i][j];
        }
    }
    gg[0][0]=ara[0][0];
    gg[0][1]=ara[0][1];
    gg[0][2]=ara[0][2];

    for(int i=1;i<n;i++){
        for(int j=0;j<3;j++){
            gg[i][j]=ara[i][j]+max(gg[i-1][(j+1)%3],gg[i-1][(j+2)%3]);
        }
    }
    int m=max(gg[n-1][0],max(gg[n-1][1],gg[n-1][2]));
    cout<<m<<endl;
    
    return 0;
}