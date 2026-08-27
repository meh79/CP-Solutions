#include <bits/stdc++.h>
using namespace std; 

void solve() {
    long long int n,k;
    cin>>n>>k;
    if(n<3){
        cout<<"-1"<<endl;
        return;

    }  
    if(k>n/2||n==k){cout<<-1<<endl;return;} 
   long long  int ara[n];
    long long int l=1,r=n;
   long long  int pivot=k*2+1;
   long long  int hehe_factor=0;
    for(int i=0;i<n;i++){
       // if(i>=pivot)hehe_factor=1;
        //if(hehe_factor==0){
            if(i%2==0){ara[i]=l;l++;}
            else {ara[i]=r;r--;}
       
        
        
      
    } 

    //if(k==n/2){
        for(int i=0;i<n;i++){
            if(i==n-1)cout<<ara[i];
            else
            cout<<ara[i]<<" ";
        }
    

    
    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    //int term=1;

    while(t--){

       //cout<<"Case "<<term<<": ";
        solve();
         //term++;
    }
    return 0;
}