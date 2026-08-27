#include<iostream>
using namespace std;

class student{
    private:
        int roll;
        float cgpa;

    public:
        //constructor
        student(int r, float c){
            roll=r;
            cgpa=c;
            cout<<"Constructor called: object created."<<endl;
        }

        void showdata(){
            cout<<"Roll No: "<<roll<<endl;
            cout<<"CGPA   : "<<cgpa<<endl;

        }

        //destructor
        ~student(){
            cout<<"Destructor called: Object for roll "<<roll<<" destroyed."<<endl;

        }
};
int main(){
    {
        student s1(2408011, 2.43);
        s1.showdata();

    }
    return 0;
}
