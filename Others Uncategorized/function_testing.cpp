#include<bits/stdc++.h>
using namespace std;

void prime(int a){
    int count=0;
    vector<int> v;
    for(int i=2;i<=a;i++){
        count=0;
        for(int j=2;j<=i;j++){
            if(i%j==0)count++;
        }
        if(count==1)v.push_back(i);
       
    }

    
}

int main(){
    int a;
    cin>>a;
    prime(a);
    return 0;  
}