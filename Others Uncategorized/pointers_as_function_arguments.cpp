#include<bits/stdc++.h>
using namespace std;

int Total(int *a){
    int sum=0;
    int size=sizeof(a)/sizeof(a[0]);
    cout<<"Size of a "<<sizeof(a)<<" Size of a[0] "<<sizeof(a[0])<<endl;
    for(int i=0;i<size;i++)sum+=a[i];
    
    return sum;
}
int main(){
    int a[]={1,2,3,4,5};
    cout<<"Inside: \n";
    cout<<"Size of a "<<sizeof(a)<<" Size of a[0] "<<sizeof(a[0])<<endl;
    cout<<"Outside\n";
    int total=Total(a);
    cout<<total;
}