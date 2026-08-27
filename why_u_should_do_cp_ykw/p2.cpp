#include<bits/stdc++.h>
using namespace std;
void cp(){
    long long int a;
    cin>>a;
    long long int sum=a*(a+1)/2;

    //minus part er total calculation

    int negative=0;
    for(int i=0;pow(2,i)<=a;i++){
            negative+=pow(2,i);
          //  cout<<negative<<" for i->"<<i<<endl;
    }
    // cout<<"total negative "<<negative<<endl;
    // cout<<"sum before "<<sum<<endl;
    sum=sum-2*negative;
    //cout<<"sum after "<<sum<<endl;
    cout<<sum<<endl;
    return ;
}

int main(){
    int t;
    cin>>t;
    while(t--)cp();

    return 0;
}