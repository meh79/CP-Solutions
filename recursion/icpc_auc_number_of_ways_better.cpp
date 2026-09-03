#include<bits/stdc++.h>
using namespace std;
int pp(int s,int e){
    if(s==e)return 1;
    if(s>e)return 0;

    return pp(s+1,e)+pp(s+2,e)+pp(s+3,e);
}

int main(){
    int s,e;
    cin>>s>>e;

    cout<<pp(s,e);
}