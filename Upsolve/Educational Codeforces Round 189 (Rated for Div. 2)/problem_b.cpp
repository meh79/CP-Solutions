#include<bits/stdc++.h>
using namespace std;
void cp(){
    string s;
    cin>>s;

    int l=s.length();

    char first=s[0];
    int count=0;
    int abc=0;
    vector<int> v;


    
    for(int i=0;i<l;i++){


        if(first==s[i])count++;

        else {
            v.push_back(count);
          //  cout<<s[i-1]<<" = "<<v.back()<<endl;
            first=s[i];
            count=1;

            
        }
        
        
    }
      v.push_back(count);
      //cout<<s[l-1]<<" = "<<v.back()<<endl;
   
    // int j=0;
    int c=0;
    int stor=0;
    for(auto x:v){
        if(x>1){
            c++;
            if(stor<x)stor=x;
        }
    }
    if(stor==l&&stor!=3)cout<<"NO"<<endl;
    else if(c%2!=0&&c!=1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


    return ;
    
}

int main(){
    int t;
    cin>>t;
    while(t--)cp();

    return 0;
}

/*

My thoughts:

How to select the subsstring --- inverse or swap kora jayte pare    

Simplify the problem
chos the substring

-

;;;





*/