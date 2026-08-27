#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);// takes input, first e copy kore then store kore, slower
    v.emplace_back(2);//takes input but no copy
    // v[3]=111;
    // cout<<v[3]<<" "<<v[3]<<" "<<v[3]
    v.resize(4);
    v[3]=1111;
    cout<<v[3]<<" "<<v[3]<<" "<<v[3]<<endl;
}