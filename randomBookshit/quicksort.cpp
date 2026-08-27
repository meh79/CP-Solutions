#include<bits/stdc++.h>
using namespace std;
int comparefunc(const void *a, const void *b){
    return (*(int*)a-*(int*)b);
}
int main()
{
    int i,n=5;
    int values[]={44,4,45,5,4};

    qsort(values, 5, sizeof(int), comparefunc);

    for(int i=0;i<5;i++)cout<<values[i]<<endl;

    return 0;
}