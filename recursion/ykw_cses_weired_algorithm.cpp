#include<bits/stdc++.h>
using namespace std;

void pp(long long int n){
    
    if(n==1){
        cout<<1<<endl;
        return;
    }
    cout<<n<<" ";
    if(n%2==0)n=n/2;
    else {
        n=n*3+1;
    }
    pp(n);
}

int main(){
    long long int n;
    cin>>n;
    pp(n);
}

//this is proper tail recursion