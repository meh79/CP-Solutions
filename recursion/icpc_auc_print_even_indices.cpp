#include<bits/stdc++.h>
using namespace std;
const int N=10e5+10;
int ara[N];
void pp(int n){
    //base case
    
    if (n==0){cout<<ara[n]<<" "<<endl; return;}
    cout<<ara[n]<<" ";

    return pp(n-2);
    
    //recursive case


}

int main(){
    int n;cin>>n;

    //int ara[n];

    for(int i=0;i<n;i++)cin>>ara[i];
    if(n%2==0)pp(n-2);
    else pp(n-1);
}
