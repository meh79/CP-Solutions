#include <bits/stdc++.h>
using namespace std; 

void solve() {
    
}

int main() {
    int* marks;
    int i,n;

    cin>>n;

    //allocating the memory
    marks=(int *)calloc(n,sizeof(int));
    if(marks==NULL){
        cout<<"Memory Allocation falied"<<endl;
        return 1;
    }
    for(int i=0;i<n;i++)cin>>marks[i];
    for(int i=0;i<n;i++)cout<<marks[i]<<endl;

    free(marks);
    return 0;
}