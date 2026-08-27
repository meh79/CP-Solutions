#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return a<b;
}

int main()
{
    int n=10;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    sort(ara,ara+n);
    for(int i=0;i<n;i++){
        cout<<ara[i]<<" ";
    }
    return 0;

}
