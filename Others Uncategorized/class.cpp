#include<iostream>
using namespace std;
//class definition

class dog
{
public:
    string name;
    int age; 

};

int main(){
    dog dog1;
    string s;
    cin>>s;
    dog1.name=s;
    cout<<dog1.name;
    return 0;
}