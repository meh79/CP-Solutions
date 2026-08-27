#include <bits/stdc++.h>
using namespace std; 
void prefix( long long int ara[], int n){
    for(int i=1;i<n;i++)ara[i]+=ara[i-1];
    
}
void solve() {
    int n;
    cin>>n;
    long long int ara[n],ara2[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
        ara2[i]=ara[i];
    }


    prefix(ara2,n);
    //for(int i=0;i<n;i++)cout<<ara[i]<<endl;
    

    for(int i=1;i<n;i++){
      
        long long int val=ceil(ara2[i])/(i+1);
        
        ara[i]=min(ara[i-1],val);
    }

    for(int i=0;i<n;i++)cout<<ara[i]<<" ";
    cout<<endl;

}

int main() {
    int t;
    cin>>t;
    while(t--){
        //cout<<"Test case: "<<t<<endl;
        solve();
    }

    return 0;
}