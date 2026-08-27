#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)cin>>ara[i];

    sort(ara,ara+n);

    int mid=(ara[0]+ara[n-1])/2;
    cout<<"Midpoint "<<mid<<endl;
    int round=0;

    for(int i=0,j=n-1;i!=j;i++,j--){
        if(ara[i]!=mid || ara[j]!=mid)round++;
        //cout<<"Value of i="<<i<<" j="<<j<<endl;

    }
    cout<<"It takes "<<round<<" turns"<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--)solve();
    
    return 0;
}