#include <bits/stdc++.h>
using namespace std; 

void solve() {
    
}

int main() {

    int n=10;
    int ara[]={1,2,3,4,5,6,7,8,9,10};
    //nesteds loop
    // for(int i=0;i<n;i++){
    //     int k=1;
    //     for(int j=0;j<n;j++){
          
    //         for(int l=j;l<j+k;l++){
    //             cout<<ara[l]<<" ";
    //         }k++;cout<<endl;

    //     }
    // }


    //2d pyramid
    int diff=0;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<=diff;j++){
           if(diff<=n) printf("ara[%d]=%d where i=%d; j=%d; diff=%d\n",j,ara[j],i,j,diff);
        }
        diff++;
        cout<<endl;
    }
    return 0;
}