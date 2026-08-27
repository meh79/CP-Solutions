#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ara[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ara[i][j];
        }
    }
    //  for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<ara[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    
    for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
            cout<<ara[i][j]<<" ";
        }
        cout<<endl;
    }

}