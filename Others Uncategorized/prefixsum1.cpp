#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a;
    cin>>a;
    int ara[a+1];
    for(int i=1;i<=a;i++){
        cin>>ara[i];
    }

    for(int i=1;i<=a;i++){
        cout<<ara[i]<<" ";
    }

    cout<<endl;
    ara[0]=0;
    for(int i=1;i<=a;i++){
        ara[i]=ara[i]+ara[i-1];
    }



   for(int i=1;i<=a;i++){
    cout<<ara[i]<<" ";
    }
    cout<<endl;
}