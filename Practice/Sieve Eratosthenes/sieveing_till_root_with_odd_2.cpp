#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<bool> is_prime(n+1, true);
    is_prime[0]=is_prime[1]=false;
     // CHANGE 1: Manually cross out all even numbers greater than 2
    for(int i=4; i<=n; i+=2){
        is_prime[i] = false;
    }

    for(int i=3;i*i<=n;i+=2){
        if(i%2==0)continue;
        if(is_prime[i]){
            for(int j=i*i;j<=n;j+=2*i){
                is_prime[j]=false;
            }
        }
    }


    // for(int i=1;i<=n;i++){
    //     cout<<is_prime[i]<<endl;
    // }
    //printing primes

    for(int i=0;i<=n;i++){
        if(is_prime[i]==true)cout<<i<<endl;
    }
    return 0 ;
}