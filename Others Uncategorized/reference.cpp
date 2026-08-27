#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=2;
    int &b=a;
    cout<<a<<endl;
    cout<<b<<endl;

    b=100;
    cout<<a<<endl;
    cout<<&b<<endl;

    //it is said as b is a refernce of a.
    //for this reason if you change b it will also change a
}