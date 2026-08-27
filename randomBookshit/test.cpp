#include<bits/stdc++.h>
using namespace std;
void permut(int ara[], int n, int index){
    if(index==n){
        for(int i=0;i<n;i++)cout<<ara[i]<<" ";
        cout<<endl;
        return;
    }

    for(int j=index;j<n;j++){
        //first swap
        swap(ara[index],ara[j]);
        permut(ara,n,index+1);
        //backtrack
        swap(ara[index],ara[j]);
    }

}
int main(){
    int n=10;
    int ara[]={1,2,3,4,5,6,7,8,9,10};

    permut(ara,n,0);

    return 0;
}