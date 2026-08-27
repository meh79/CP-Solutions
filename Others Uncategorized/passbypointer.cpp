#include<bits/stdc++.h>
using namespace std;
//passsby pointer
void print(int *p){
    cout<<*p<<endl;
}


int main()
{
    int a=10001;
    print(&a);
}