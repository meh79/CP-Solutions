#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    string number = "44";

    stringstream s;
    s<<number;
    int input;
    s>>input;
    cout<<input<<endl;
    return 0;
}