#include<bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<x<<#x<<" "; print(x); cerr<<endl;
#else 
#define debug(x)
#endif

void print(vector<int> v){
    cerr<<"[";
    for(auto x:v){
        cerr<<x<<" ";
    }
    cerr<<"]";
}
void print(auto x){
    cerr<<x;
}


int sum(int z, int y){
    return z+y;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b);
}