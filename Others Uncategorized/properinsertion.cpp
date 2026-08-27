
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a ;
    int ara[a];
    for(int i=0;i<a;i++){
        cin>>ara[i];
    }

    //insertion sorting code
    for(int i = 1; i < a; i++) {
        int key = ara[i];
        int j = i - 1;

        while(j >= 0 && ara[j] > key) {
            ara[j + 1] = ara[j];
            j--;
            }
        ara[j + 1] = key;
    }
    for(int i=0;i<a;i++)cout<<ara[i]<<" ";
}