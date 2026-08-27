#include<bits/stdc++.h>
using namespace std;
void sd(int *a,int *b){
    int temp=*a;
    int temp2=*b;
    *a=temp+temp2;
    *b=abs(temp-temp2);
    cout<<*a<<endl<<*b<<endl;
}
int main()
{
    //a contain their sum b contain their absolute diff
    int a,b;
    cin>>a>>b;
    sd(&a,&b);
    return 0;
      
}