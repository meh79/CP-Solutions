#include<bits/stdc++.h>
using namespace std;

int add(int n1, int n2){
    return n1+n2;
}

int sub(int n1, int n2){
    return n1-n2;
}

int operate(int(*opp)(int,int),int a,int b){
    return opp(a,b);

}
int main()
{   
    
    
    int n1=10,n2=5;
    printf("Result: %d\n", operate(&add,n1,n2));

    printf("Result : %d\n", operate(&sub,n1,n2));

    return 0;
}

//int ooe(int a, int b, (int(ope*)(int a,int b)));