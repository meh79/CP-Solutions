#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    vector<int> a(n),b(n);//copy purpose

    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b.begin(),b.end());
    //doing the thing
    for(i=1;i<n-1;i++){
        if((a[i-1]<a[i])&&(a[i]>a[i+1])){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    
    if(a[0]==b[0])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return;
    
}

int main() {
    int t;
    cin>>t;

    while(t--){

        solve();
    }
    return 0;
}