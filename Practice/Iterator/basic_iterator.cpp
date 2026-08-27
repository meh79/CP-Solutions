#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<int, string> mp;
    mp[101] = "Alice";
    mp[102] = "Bob";
    mp[103] = "Charlie";

    // 1. Declare iterator
    map<int, string>::iterator it;

    // 2. Assign via find()
    it = mp.find(02);
    if(it!=mp.end())cout<<"Found it"<<endl;
    else cout<<"Not found"<<endl;

    for(const auto& [key,val]: mp){
        //here iterator directly points to the node of that key,val
        cout<<key<<" : "<<val<<endl;
    }
    
}