#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int p=0;p<t;p++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int bad=0,good=0;
        for(int i=0;i<n;i++){
            if((n-i)>=4 && s[i]=='2' && s[i+1]=='0' && s[i+2]=='2' && s[i+3]=='6' ){
            //  cout<<"Paisi 2026"<<i <<endl;  
                good++;
            }
            if((n-i)>=4 && s[i]=='2' && s[i+1]=='0' && s[i+2]=='2' && s[i+3]=='5' ){
            //  cout<<"Paisi 2025 "<<i <<endl;  
                bad++;
            }
        }
         if(good>=1) cout<<"0"<<endl;
            else if(good==0&&bad==0)cout<<"0"<<endl;
            else if(good==0&&bad>0)cout<<"1"<<endl;
    }
    return 0;

}