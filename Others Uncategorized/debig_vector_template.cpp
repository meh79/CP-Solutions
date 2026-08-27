#include<bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" "; print(x); cerr<<endl;
#else
#define debug(x)
#endif



// void print(vector<int> v){
//     cerr<<"[";
//     for(auto x:v){
//         cerr<<x<<" ";
//     }
//     cerr<<"]";
// }

template<class T>
void print(T a){
    cerr<<a;
}

template<class T> void print(vector<T> v){
    cerr<<"[";
    for(auto x:v){
        print(x);
        cerr<<" ";
    }
    cerr<<"]";
}


int main()
{

    #ifndef ONLINE_JUDGE
        freopen("Error.txt","w", stderr);
    #endif

    int a=10,b=20;

    debug(a);
    debug(b);

    vector<int> v={1,2,4,55666};
    debug(v);
    vector<string> v1={"a","b","c"};
    debug(v1); 



}