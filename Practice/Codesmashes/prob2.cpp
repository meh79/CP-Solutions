#include <bits/stdc++.h>
using namespace std; 

void solve() {
    long long  int n,k;
    cin>>n>>k;
    string s;
    cin>>s;   
    int count=0;
    //counting how many 0 <k
    if(k==0){
        if(s[0]=='1')cout<<1<<endl;
        else if(s[0]=='0')cout<<0<<endl;
        return;
    }
    for(long long int i=0;i<k;i++){
        if(s[i]=='0')count++;
    }
    if(count==0&&s[k]=='1')count++;
    cout<<count<<endl;
}

int main() {

     ios_base::sync_with_stdio(false);
    
    // // Unties cin from cout (stops automatic flushing before input)
    cin.tie(NULL);
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