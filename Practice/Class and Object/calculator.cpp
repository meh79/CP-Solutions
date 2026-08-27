#include<iostream>
using namespace std;

class calculator{
    private:
        float num1, num2;
    public:
        void getInput(float a,float b){
            num1=a;
            num2=b;
        }

        float add(){ return num1+num2;}
        float substract() { return num1-num2;}
        float multiply(){return num1*num2;}
        float divide(){
            if(num2==0)cout<<"Error"<<endl;
            else return num1/num2;
        }
};

int main(){
    calculator cal;
    float a,b;
    int c;

    cout<<"Num1= ";
    cin>>a;
    cout<<"Num2= ";
    cin>>b;

    cal.getInput(a,b);
    cout<<"\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n0. Exit\n";

    c=1;
    while(c){
        cout<<"Enter your choice (1-4): ";
        cin>>c;
        switch (c) {
            case 1:
                cout<<"Result: "<<cal.add()<<endl;
                break;
            case 2:
                cout<<"Result: "<<cal.substract()<<endl;
                break;
            case 3:
                cout<<"Result: "<<cal.multiply()<<endl;
                break;
            case 4:
                cout<<"Result: "<<cal.divide()<<endl;
                break;
            case 0:
                cout<<"Exiting the program."<<endl;
                return 0;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    }
    return 0;

}
