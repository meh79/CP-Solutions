#include <iostream>
using namespace std;
 
class Student {
    private:
        int roll;
        float cgpa;
 
    public:
        // Constructor
        Student(int r, float c) {
            roll = r;
            cgpa = c;
            cout << "Constructor called: Object created." << endl;
        }
 
        void showData() {
            cout << "Roll No : " << roll << endl;
            cout << "CGPA    : " << cgpa << endl;
        }
 
        // Destructor
        ~Student() {
            cout << "Destructor called: Object for Roll "
                 << roll << " destroyed." << endl;
        }
};
 
int main() {
    cout << "Program start" << endl;
 
    {
        Student s1(21301578, 3.85);
        s1.showData();
    } // s1 goes out of scope here, destructor is called
 
    cout << "Program end" << endl;
    return 0;
}
