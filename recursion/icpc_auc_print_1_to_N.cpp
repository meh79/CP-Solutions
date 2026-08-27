#include<bits/stdc++.h>
using namespace std;
int i=1;
void pp(int n){
    
    if(n==0)return;
    cout<<i<<endl;
    i++;
    return pp(n-1);
}
int main()
{
    int n;
    cin>>n;
    pp(n);
}