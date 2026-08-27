#include<bits/stdc++.h>
using namespace std;
void cp(){
    string s,t;
    cin>>s>>t;

    // swap(s,t);
    // cout<<s<<endl<<t<<endl;
    int cas=0;
    if(t.length()>s.length())cas=t.length();
    else cas=s.length();//s always boro
    
    // cout<<"Testcase: "<<s<<" "<<t<<":"<<endl<<"Case "<<cas<<endl;

    for(int i=0;i<cas;i++){
        if(i>=t.length())cout<<s[i];
        else if(i>=s.length())cout<<t[i];
        else cout<<s[i]<<t[i];
    }
    cout<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--)cp();

    return 0;
}