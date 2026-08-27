#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    cout<<s<<endl;
    //counting
    char c=s[0];
    int count=1,m=0;;
    int i;
    for(i=1;i<=n;i++){
        if(s[i]==s[i-1]){count++;
           // cout<<s[i]<<endl;
        }
        else{
            //cout<<"mile nai= "<<s[i]<<endl;
            m=max(count,m);
            count=1;
        }
    }
    
   //if(s[n-1]==s[i])
    cout<<m<<endl;
    if(n-m<=2)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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