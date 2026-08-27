#include<bits/stdc++.h>
using namespace std;
int main(){
    set<pair<int,int>> hotel={{1,999},{2,10},{2,50},{3,5}};

    //1. the elevator jump: Jump straight to the start of the floor 2
    auto laser= hotel.lower_bound({2,-1});

    //2, Print the room as long as we are still on floor 2
    // we also make sure the kaser hasnt hit the .end() of the whole set


    //laser->first==2 only this condition will crash the whole system, as undefined behavior
    while(laser!=hotel.end() && laser->first==2){
        cout<<"found room: "<<laser->second<<endl;
        laser++;
        

    }


}