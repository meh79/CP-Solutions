#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> p1={3,1}, p2={2,1}, p3={3,3};

    cout << "p1 == p2: " << (p1 == p2) << endl;
    cout << "p1 != p3: " << (p1 != p3) << endl;
    cout << "p1 > p3: " << (p1 > p3) << endl;
    cout << "p1 < p2: " << (p1 < p2) << endl;
    cout << "p1 >= p3: " << (p1 >= p3) << endl;
    cout << "p3 <= p1: " << (p3 <= p1)<<endl;


    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p3.first<<" "<<p3.second<<endl;

    return 0;
}