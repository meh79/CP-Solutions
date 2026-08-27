#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int ara[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cin>>ara[i][j];
        }
    }

    //right diagional sum
    int end=0;
    for(int i=0;i<a;i++){
        end+=ara[i][i];
    }
    int front=0;
    for(int i=0,j=a-1;i<a;i++,j--){
        // printf("for i=%d j=%d =",i,j);
        // cout<<ara[i][j]<<endl;
        front+=ara[i][j];
    }
    // cout<<end<<endl;
    // cout<<front<<endl;
    cout<<abs(end-front)<<endl;
    return 0;

}