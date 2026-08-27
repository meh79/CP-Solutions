#include<bits/stdc++.h>
using namespace std;
void cp()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int b1=0,b2=0;
    for(int i=0;i<n;i++){
        if(s[i]=='(')b1++;
        else b2++;
    }    

    if(b1!=b2)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return;
}
int main(){
    int t;

    cin>>t;
    while(t--)cp();

    return 0;
}