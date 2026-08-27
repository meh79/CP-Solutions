#include<bits/stdc++.h>
using namespace std;

long long int power(int a,int b){
    long long int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}

int main(){
    int a,b;
    cin>>a>>b;
    //x=a; powerN =b
    long long int sum=0;
    for(int i=2;i<=b;i++){
        if(i%2==0)sum+=power(a,i);
    }
    cout<<sum<<endl;
}