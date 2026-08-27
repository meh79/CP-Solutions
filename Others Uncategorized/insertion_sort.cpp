#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a ;
    int ara[a];
    for(int i=0;i<a;i++){
        cin>>ara[i];
    }

    //insertion sorting code

    for(int i=1;i<a;i++){
        int j;
        int key=ara[i];
        for( j=i-1;j>=0;j--){
            
            if(key<ara[j])ara[j+1]=ara[j];
            else break;
        }
        ara[j+1]=key;
    }
    for(int i=0;i<a;i++)cout<<ara[i]<<" ";
}