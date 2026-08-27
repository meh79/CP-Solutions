#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin>>t;
    for(int tt=0;tt<t;tt++){
        int n;
        cin>>n;
        int s[n];
        int x;
        int i;
        x=n;
        int count=0;
        for(i=0;i<n;i++){
            if(x==0)break;
            s[i]=x%2;
            
            x=x/2;
            if(s[i]==1)count++;
            
        }
        int a=0;

        for(int j=0;j<count;j++){
            a=a+pow(2,j);
        }
        cout<<a<<endl;

    }
    return 0;
}
