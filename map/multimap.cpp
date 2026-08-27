#include<bits/stdc++.h>
using namespace std;
int main(){

    //multimap
    multimap<int, string> mp1={
        {1,"Un"},
        {1,"One"},
        {2,"Two"},
        {2,"Dos"},
        {1,"Uno"},
        {2,"Deux"}
    };

    cout<<"Key - vlaue"<<endl;

    //loop across the multimap
    //display the key-vlaue pairs

    for(const auto& key_val:mp1){
        int key=key_val.first;
        string value=key_val.second;

        cout<<key<<" - "<<value<<endl;


    }

    return 0;
}