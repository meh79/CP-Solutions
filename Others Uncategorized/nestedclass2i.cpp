#include<iostream>
using namespace std;

class Outer
{
public:
    //nested class inside outer
    class Inner
    {
        public:
            void display(){
                cout<<"This is the inner class"<<endl;
            }
    };

    void show(){
        cout<<"This is the outer class"<<endl;
    }
};

int main()
{
    //creating object of outer class
    Outer outerobj;
    outerobj.show();

    //creatng object of inner class using outer
    Outer::Inner innerobj;
    innerobj.display();

    return 0;
}