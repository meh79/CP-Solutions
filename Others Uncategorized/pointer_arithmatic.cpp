#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[]={1,2,3,4,5,6,7};
    int *h=x;

    for(int i=0;i<7;i++){
        h=x+i;
        cout<<h<<endl;
    }
     for(int i=0;i<7;i++){
        h=x+i;
        cout<<*h<<endl;
    }
}