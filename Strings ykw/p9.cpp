#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        char c;
        c=s[i];
        //<97 means capital
        if(s[i]!=','&&(s[i]-0)<97){
            c=s[i]+32;
            cout<<c;
        }
        else if(s[i]==',')cout<<" ";
        else {
            c=s[i]-32;
            cout<<c;
        }
        
    
    }
    cout<<endl;
    // char ch='N'+32;
    // cout<<ch;
    return 0;
}