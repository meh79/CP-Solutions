#include<bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" "; print(x); cerr<<endl;
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
void print(auto a){
    cerr<<a;
}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("Error.txt","w", stderr);
    #endif

    int a=10,b=20;

    debug(a);
    debug(b);

    vector<int> v={1,2,4,55};
    debug(v); 



}