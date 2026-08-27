//fuck me i am an idiot

#include<bits/stdc++.h>
using namespace std;
void cp()
{
    string s;
    cin>>s;
    int l=s.length();
    int count=0;
    for(int i=0;i<l-1;i++){
        if(s[i]==s[i+1])count++;

    }
    if(count<=2)cout<<"YES\n";
    else cout<<"NO\n";

    return ;
}

int main(){
    int t;
    cin>>t;

    while(t--)cp();

    return 0;
}