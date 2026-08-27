#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    int max1=0;
    for(int i=0;i<n;i++){
        cin>>ara[i];
        if(max1<ara[i])max1=ara[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        count=count+max1-ara[i];
    }
    cout<<count<<endl;
    
}
//we will think about corner case later