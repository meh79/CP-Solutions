#include <bits/stdc++.h>
using namespace std; 

int equal(int ara[],int n);

int sorted(int ara[], int n);
void solve() {
    int n,k;
    cin>>n>>k;
    //k=maximum length can be reversed
    //n= number of boxes
    
    int ara[n],i=0;
    for(i=0;i<n;i++)cin>>ara[i];
    int check=equal(ara,n);
    if(k==1&&check==1)cout<<"YES"<<endl;
    else if(k==1&&sorted(ara,n)==1)cout<<"YES"<<endl;
    else if(k==1&& check==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
}

int main() {
    int t;
    cin>>t;

    while(t--){

        solve();
    }
    return 0;
}
/*
case 1:
k=1, and all element equal
k=1, and not equal
k=random and random

case 2:
k=2, and equal pairs or triplet?--> ans YES

//I need to make a code that check if all equal or not



*/

int equal(int ara[],int n){
    int i=0, val=1;
    int initial=ara[0];
    for(i=1;i<n;i++){
        if(ara[i]==initial)val++;


    }
    if(n==val) return 1;
    else return 0;
}

int sorted(int ara[], int n){
    int i=0, val=1;
    for(i=1;i<n;i++){
        if(ara[i-1]<=ara[i])val++;

    }
    if(n==val) return 1;
    else return 0;
}