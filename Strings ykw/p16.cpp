/*

first e string array re bninary array te convert kora
But also extra row and column nea jekhane first row and column zero hbe

//binary array conversion done


*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int ara[r+1][c+1];

    for(int i=0;i<c+1;i++)ara[0][i]=1;
    for(int i=0;i<r+1;i++)ara[i][0]=1;
    //cout<<ara[0][4];
    string s;
    for(int i=1;i<=r;i++){
        cin>>s;
        for(int j=1;j<=c;j++){
            if(s[j-1]=='x')ara[i][j]=1;
            else if(s[j-1]=='.')ara[i][j]=0;
        }
    }

    // for(int i=0;i<=r;i++){
    //     for(int j=0;j<=c;j++){
    //         cout<<ara[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int a,b;
    cin>>a>>b;
    //a--;b--;
    if(ara[a-1][b-1]==1&&ara[a-1][b]==1&&ara[a-1][b+1]==1&&ara[a][b-1]==1&&ara[a][b+1]==1&&ara[a+1][b-1]==1&&ara[a+1][b]==1&&ara[a+1][b+1]==1)cout<<"yes"<<endl;
    else cout<<"no"<<endl;

    
   
}