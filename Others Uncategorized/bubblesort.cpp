#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int ara[a];
    for(int i=0;i<a;i++){
        cin>>ara[i];
    }

    //bubble sort

    // for(int i=0;i<a;i++){
    //     for(int j=0;j<a;j++){
    //         if(ara[i]<ara[j])swap(ara[i],ara[j]);
    //     }
    // }
    // for(int i=0;i<a;i++){
    //     cout<<ara[i]<<" ";
    // }

    //optimized bubble sort

    for(int i=0;i<a-1;i++){
        for(int j=0;j<a-i-1;j++){
            if(ara[j]>ara[j+1])swap(ara[j],ara[j+1]);
        cout<<"Iteration "<<i<<","<<j<<"-> ";
        for(int k=0;k<a;k++){
        cout<<ara[k]<<" ";

        }cout<<endl;
        }
       
    }
    for(int i=0;i<a;i++){
        cout<<ara[i]<<" ";
    }

    //more optimized


 }