#include<iostream>
using namespace std;

class GfG
{
public:
    int val;
    void show(){
        cout<<"Value "<<val<<endl;
    }
};

int main()
{
    GfG a;
   cin>>a.val;
    a.show();

}