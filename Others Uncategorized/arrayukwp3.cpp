#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int ara[a];
    for(int i=0;i<a;i++){
        cin>>ara[i];
    }
    int t[a];
    int count=0;
    for(int i=0;i<a;i++){
        count=0;
        for(int j=0;j<a;j++){
            if(ara[i]>=ara[j])count++;
        }
        t[count-1]=ara[i];
    }
    for(int i=0;i<a;i++){
        cout<<t[i]<<" ";
    }
}