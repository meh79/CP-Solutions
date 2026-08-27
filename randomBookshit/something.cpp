#include<stdio.h>

#define MAX(a,b) (a>b ? a:b )

int main(){

    int a=83, b=323;

    double dl=8.32323323, d2=3.333333323232;
    printf("maximum of %d and %d is %d\n",a,b,MAX(a,b));
    printf("maximum of %lf and %lf is %lf\n",d1,d2,MAX(a,b));

}   