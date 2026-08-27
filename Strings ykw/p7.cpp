#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;cin>>a;
    int sum=0; char c;
    int s=0;
    for(int i=0;i<a;i++){
        cin>>c;
        s=c-'0';
        sum+=s;
    }
    cout<<sum<<endl;
}