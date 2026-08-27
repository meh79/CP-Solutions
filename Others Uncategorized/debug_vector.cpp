#include<bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" "; print(x); cerr<<endl;
#else
#define debug(x)
#endif

#ifndef ONLINE_JUDGE
#define debug1(x) cerr<<#x<<" "<<x<<endl;
#else
#define debug1(x)
#endif

void print(vector<int> v){
    cerr<<"[";
    for(auto x:v){
        cerr<<x<<" ";
    }
    cerr<<"]";
}
int main()
{

    #ifndef ONLINE_JUDGE
        freopen("Error.txt","w", stderr);
    #endif

    int a=10,b=20;

    debug1(a);
    debug1(b);

    vector<int> v={1,2,4};
    debug(v); 



}