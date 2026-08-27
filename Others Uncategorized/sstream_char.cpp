#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    string name="asi na  jibn   jk";
    stringstream sso(name);
    string s;
    while(sso>>s){
        if(s=="a") cout<<"Jibn cdi"<<endl;
        else cout<<"loser";
    }

}