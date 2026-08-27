#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    int s,t;
    cin>>s>>t;
    int count=0;
    for(a=0;a<=s;a++){
        for(b=0;a+b<=s;b++){
            for(c=0;a+b+c<=s;c++){
                if(a*b*c<=t)count++;
            }
        }
    }

    cout<<count<<endl;

    return 0;
}