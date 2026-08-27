#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int ara[31];
    for(int i=0;i<31;i++){
        cin>>ara[i];
    }

    int k=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<pow(2,i);j++,k++){
            cout<<ara[k]<<" ";
        }
        cout<<endl;
    }
}