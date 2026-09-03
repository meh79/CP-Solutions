#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=10;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=12;j++){
            if(j==11)break;
            cout<<j<<" ";
        }
        cout<<endl;
    }
}