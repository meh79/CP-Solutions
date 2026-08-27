#include<bits/stdc++.h>
using namespace std;
int main()
{
    //creating a notebook of size N+1, filled with 0s
    vector<int> gg(N+1,0);

    //Manually handeled base cases
    gg[1]=1;
    gg[2]=1;

    //the loop builds the rest of the answer
    for(int i=3;i<=n;i++){
        gg[i]=gg[i-1]+gg[i-2];
    }
    return gg[N];1
}