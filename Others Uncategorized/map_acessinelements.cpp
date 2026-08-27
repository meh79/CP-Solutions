#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m1;
    m1[1]="geeks";
    m1[2]="for";
    m1[3]="geeks";

    //acessing elements
    cout<<m1[1]<<endl;
    cout<<m1.at(2)<<endl;
}