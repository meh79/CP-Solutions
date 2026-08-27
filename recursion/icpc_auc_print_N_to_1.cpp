#include<bits/stdc++.h>
using namespace std;

void pp(int n){
    if(n==1){cout<<n<<endl;return;}
    cout<<n<<" ";
    return pp(n-1);
}

int main(){
    int n;
    cin>>n;
    pp(n);
}
