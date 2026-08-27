#include<bits/stdc++.h>
using namespace std;
//number a 4 or 7 include thakbe
void sort11(int a,int b){
    string s;
    int count=0,rc=0;
    vector<int> v;
    for(int i=a;i<=b;i++){
        s=to_string(i);
        count=0;
       
        for(int j=0;j<s.size();j++){
            //cout<<"i->"<<i<<" s["<<j<<"] "<<s[j]<<endl;

            if(s[j]=='4'||s[j]=='7'){count++;}
        }
        //cout<<"The count is "<<count<<". And the size is"<<s.size()<<endl;
        if(count==s.size()){v.push_back(i);rc++;}
    }
    if(rc==0){cout<<"-1"<<endl;return ;}
    else{
    for(int i=0;i<v.size();i++){
        if(i+1==v.size())cout<<v[i];
        else cout<<v[i]<<" ";
    }
    cout<<endl;
    }
}


int main()
{
    int a,b;
    cin>>a>>b;
    // string s=to_string(a);
    // if(s[0]-'0'==4)cout<<"Milse"<<endl;
    // else cout<<"Mile nai";
    sort11(a,b);
    return 0;
   
}