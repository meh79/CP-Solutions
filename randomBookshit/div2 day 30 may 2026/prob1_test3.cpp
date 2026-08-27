#include <bits/stdc++.h>
using namespace std; 

void solve() {
    long long int n;
    cin>>n;
    //cout<<"n="<<n<<endl;
    long long int ara[n];
    for(int i=0;i<n;i++)cin>>ara[i];

    sort(ara,ara+n);
    int round=0;
    //two type of code for even and odd
    for(int i=0,j=n-1; i!=j,i<=j; i++,j--){
            if(ara[i]!=ara[j])round++;
    }
    cout<<round<<endl;
}


int main() {
   // cout<<ceill(1/2);
    int t;
    cin>>t;
    while(t--){
        //cout<<"For test case "<<t+1<<" :"<<endl;
        solve();
    //cout<<endl;
    }
    return 0;
}