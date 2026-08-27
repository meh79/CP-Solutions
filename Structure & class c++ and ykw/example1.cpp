#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,n1;
    cin>>n1;
   // n=10000;
    n=7943962;
   // cout<<n<<endl;
    /*
    sieve algorithm should i use?
    yeah, idk but the constraints doenst look bad
    */
    vector<bool> is_prime(n+1,true);
    for(long long int i=4;i<=n;i+=2){
        is_prime[i]=false;
    }
    is_prime[0]=is_prime[1]=false;

    for(long long int i=3;i*i<=n;i++){
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
    // //printing primes
    int count=0;
    for(long long int i=0;i<=n;i++){
        if(is_prime[i]==true){
            count++;
            if(count==n1){
                cout<<i<<endl;
                return 0;
            }
        }
    }
    return 0;
}