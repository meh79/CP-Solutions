#include <bits/stdc++.h>
using namespace std; 

void solve() {
    
}

int main() {
    int ara[]={1,2,3,4,6,7,8};
    int n=8;
    // int result=ara[0];
    // for(int i=0;i<n;i++){
    //     result=result^ara[i];
    // }
    
    int j;
    for(int i=0;i<n;i++){
        int count=0;
        for(j=0;j<8;j++){
            if((ara[j]^(i+1))==0){count++;printf("ara[%d]=%d where i=%d, j=%d, count=%d, ara[i]^(j+1)=%d\n",i,ara[i],i,j,count,ara[i]^(j+1));}
        }
        if(count==0)cout<<ara[j+1]<<" "<<i+1<<endl;
    }

    //cout<<(7^7);

    //cout<<result;
    return 0;
}