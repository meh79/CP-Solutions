#include<bits/stdc++.h>
using namespace std;


int sumdig(int a){
    int sum=0;
    while(a!=0){
        sum=sum+a%10;
        a=a/10;
    }
    return sum;
}

int result(vector<int>& v){
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    return sum;
}

void diff(int n,int a,int b){
    vector<int> v;
    int dig=0;
    for(int i=1;i<=n;i++){
        dig=sumdig(i);
        if(dig>=a&&dig<=b)v.push_back(i);
    }
    cout<<result(v)<<endl;

}



int main()
{
    int n,a,b;
    cin>>n>>a>>b;
   diff(n,a,b);
    return 0;

}