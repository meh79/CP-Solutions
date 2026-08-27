#include<bits/stdc++.h>
using namespace std;
void cp(){
    int p,q;
    cin>>p>>q;

    int total= p+q*2;

    if(((total-4)%3==0&&total-4>0)||(total-4-6)%2==0&&(total-4-6)>0)cout<<"Kaj kore"<<endl;
    else cout<<-1<<endl;

    return ;
}

int main(){
    int t;
    cin>>t;
    while(t--)cp();

    return 0;
}