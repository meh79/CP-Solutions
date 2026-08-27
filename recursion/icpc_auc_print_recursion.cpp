#include<bits/stdc++.h>
using namespace std;

void pp(int n){
    if(n==0) return;
    cout<<"I love Recursion"<<endl;
    return pp(n-1);
}
int main()
{
    int n;
    cin>>n;
    pp(n);
}