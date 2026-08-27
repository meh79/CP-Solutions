#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s2;
    cin>>s;
    for(int i=s.length()-1;i>=0;i--){
        s2.push_back(s[i]);
    }
    
    if(s==s2)cout<<"YES\n";
    else cout<<"NO\n";

    return 0;

}
