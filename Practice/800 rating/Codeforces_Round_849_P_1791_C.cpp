#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    //cout<<s<<endl;
    int count=0;
    for(int i=0,j=n-1;i<ceil(n/2);i++,j--){
        if((s[i]=='1'&&s[j]=='0')||(s[i]=='0'&&s[j]=='1')){
            count++;

            // printf("s[%d]=%c; s[%d]=%c\n",i,s[i],j,s[j]);
        }
        else break;
    }
    //cout<<"Count: "<<count<<"; ans: ";
    int ans=n-count*2;
    cout<<ans<<endl;
}

int main() {
    int t;
    cin>>t;
    int term=1;

    while(t--){
        
       //cout<<"Case "<<term<<": "<<endl;
        solve();
        term++;
    }
    return 0;
}

