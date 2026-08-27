#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s={12,1,3,0,11,33,-1};

    //printing via ranged based loops
    for(int cc : s)cout<<cc<<" ";
    cout<<endl;

    //normal manual for loop
    for(auto laser=s.begin();laser!=s.end();laser++){
        cout<<*laser<<" ";
    }
    cout<<endl;

    //insert erase clear
    s.insert(1111);
    s.erase(0);
    for(auto x: s)cout<<x<<" ";cout<<endl;

    //size check
    cout<<"Size ";
    cout<<s.size()<<endl;

    //clearing the whole set , making it look like empty set
    s.clear();


    //TAKING A VECTOR in a Set

}