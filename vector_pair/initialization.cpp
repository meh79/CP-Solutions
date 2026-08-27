#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,string>>vec;

    /* // 1. push_back with explicit pair (Creates a temporary copy)
    vec.push_back(pair<int, string>(1, "Test"));

    // 2. push_back with curly braces (Shorter, but still makes a copy)
    vec.push_back({2, "Test"});

    // 3. emplace_back (Most efficient, builds the pair inside the vector)
    vec.emplace_back(3, "Test"); 
    
    */

    vec.emplace_back(3,"test");
    cout<<vec[0].first<<" "<<vec[0].second;
    return 0;
}