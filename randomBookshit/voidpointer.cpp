#include<bits/stdc++.h>
using namespace std;
int main(){
    void *vp;
    int n=10;
    vp=&n;

    printf("Adress of &n: %p\n",&n);
    printf("Value of vp: %p\n",vp);
    printf("Content of (*(int*)vp): %p\n",*((int *)vp));

    return 0;
}