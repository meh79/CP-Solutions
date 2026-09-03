#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n,m;
    //we will decide for max later

    int ara[n];
    //count even
    //count even + equal
    //all odd then n is the highest answer
    int count_even=0;
    for(int i=0;i<n;i++){
        cin>>ara[i];
        if(ara[i]%2==0)count_even++;

    }

    if(count_even==0){cout<<n<<endl; return 0;}

    for(int i=0;i<n;i++){
        
    }


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