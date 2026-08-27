#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int ara[]={1,2,3,0,4,5,8,6,7,9};
    sort(ara,ara+10,greater<int>());
    for(int i=0;i<10;i++){
        cout<<ara[i]<<endl;
    }
}