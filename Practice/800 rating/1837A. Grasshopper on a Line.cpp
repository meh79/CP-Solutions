#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int x,k;
    cin>>x>>k;

    // if(x%k!=0)cout<<1<<endl<<x<<endl;
    // //later conditions means x%k==0
    // //for even case
    // else if(k%2==0){
    //     cout<<2<<endl;
    //     cout<<-(x+1)<<" "<<x+1+10<<endl;

    // }
    // //for odd case
    // else if(k%2!=0)   11 3 {
    //     cout<<2<<endl;
    //     cout<<-(x+1)<<" "<<x+10<<endl;
    // }

    if(x%k!=0){
        cout<<1<<endl<<x<<endl;

    }
    else if(x<k)cout<<1<<endl<<x<<endl;
    else if(k%2==0&&x%2==0){
        cout<<2<<endl;
        cout<<3<<" "<<x-3<<endl;
    }
    else if(k%2==0&&x%2!=0)cout<<1<<endl<<x<<endl;
    //problem ase
    else if(k%2!=0&&x%2!=0){
        cout<<2<<endl;
        cout<<1<<" "<<x-1<<endl;   
    
    }
    else if(k%2!=0&&x%2==0)cout<<1<<endl<<x<<endl;
    return;
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