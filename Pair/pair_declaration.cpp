#include<bits/stdc++.h>
using namespace std;

//include<utility>

int main(){
    //standard declaration
    pair<int,string> p;

    //direct declaration
    pair<int, string> p1(1,"caa");

    //curly braces
    pair<int ,string> p2 ={ 1,"adada"};

    //make_pair dedudces the type auto
    auto p3= make_pair(3,"asdada");


    //changing manually value
    p1.first=1121;
    p1.second="amarlavloss nai";
    
    cout<<p1.first;
    cout<<" ";
    cout<<p1.second;

    return 0;

}