#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n,k,x;
    cin>>n>>k>>x;

    if(x!=1){
        cout<<"YES"<<endl<<n<<endl;
        for(int i=0;i<n;i++){
            if(i==n-1)cout<<1<<endl;
            else cout<<1<<" ";
        }
    }
    else if(k==1&&x==1)cout<<"NO"<<endl;
    else if(k==2&&x==1){
        if(n%2==0){
            cout<<"YES"<<endl;
            int count=n/2;
            cout<<count<<endl;
            for(int i=0;i<count;i++){
                if(i==count-1)cout<<2<<endl;
                else cout<<2<<" ";
            }
        }
        else cout<<"NO"<<endl;
    }   
    else {
        if(n%2==0){
            cout<<"YES"<<endl;

            int count=n/2;
            cout<<count<<endl;
            for(int i=0;i<count;i++){
                if(i==count-1)cout<<2<<endl;
                else cout<<2<<" ";
            }
        }
        else{
            n=n-3;
            if(n%2==0)cout<<"YES"<<endl;
            cout<<n/2+1<<endl;
            for(int i=0;i<n/2;i++){
                cout<<2<<" ";
            }
            cout<<3<<endl;
        }
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