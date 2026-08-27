#include<bits/stdc++.h>
using namespace std;
//010 101
void cp(){
    string s;
    cin>>s;
    // string b="nnn";
    // s=s+b;
    // s.push_back('n');
    // s.push_back('n');
    // s.push_back('n');
    //cout<<s<<endl;
    //ekta way hoitese vector or array te convert kore manipulate kora
    for(int i=0;i<s.length()-2;i++){
       if(s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0'){
       // cout<<s[5]<<endl;

        // cout<<i<<" "<<i+1<<" "<<i+2<<endl;
        // cout<<s[i]<<" "<<s[i+1]<<" "<<s[i+2]<<endl;
        cout<<"Good"<<endl;
        return ;
       }
       else if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1'){
        cout<<"Good"<<endl;
        return ;
       }
       
    }
    cout<<"Bad"<<endl;
    return;
}
int main(){
    int n;
    cin>>n;
    while(n--)cp();

    return 0;
}