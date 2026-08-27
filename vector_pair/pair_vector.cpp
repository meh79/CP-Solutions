#include<bits/stdc++.h>
using namespace std;


pair<int,int> find_bounds(const vector<int>& arr){
    int min_val=INT_MAX;
    int max_val=INT_MIN;

    for(int num:arr){
        if(num<min_val)min_val=num;
        if(num>max_val)max_val=num;

    }

    return {min_val,max_val};
}
int main(){
    vector<int> number={4,2,9,1,7};

    //unpack
    auto[lowest,highest]=find_bounds(number);

    cout<<"Min: "<<lowest<<", Max: "<<highest<<endl;

    return 0;
}