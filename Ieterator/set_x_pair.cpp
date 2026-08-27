#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<pair<int,int>> h;

    //1.insert hotel keys
    h.insert({1,100});
    h.insert({1,10});
    h.insert({2,50});
    h.insert({2,20});
    h.insert({3,10});


    //2. lower bound(>=floor 2,room 50)
    auto laser1 = h.upper_bound({2,50});
    cout<<"lower bound "<<laser1->first<<" "<<laser1->second<<endl;


    }