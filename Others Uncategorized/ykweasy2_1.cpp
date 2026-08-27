#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }

    //suppose every digit is a unique
    //int ara1[n];
    int count=0;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(ara[i]>=ara[j])count++;
        }
        if(count==n){cout<<ara[i]<<endl;break;}
    }    
    return 0;
}