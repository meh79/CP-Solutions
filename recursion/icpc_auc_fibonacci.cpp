#include<bits/stdc++.h>
using namespace std;

int pp(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    //if(n==2)return 1;

    return pp(n-1)+pp(n-2);

}
int main(){
    int n;
    cin>>n;
    n=n-1;
    cout<<pp(n)<<endl;
}