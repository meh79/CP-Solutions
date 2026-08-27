#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int j=0;j<2;j++){
        int a,b,c,d;
         
        cin>>a>>b;
        if(a<b)swap(a,b);
        int k=a;
        int r=b;
       
        for(int i=0;i<a;i++){
            if(k>0){cout<<1<<1;k=k-2;}
            else break;
        
            if(r>0){cout<<0;r--;}
            else break;
        }
        cout<<endl;
        if(k==0&&r==0)cout<<"YES"<<endl;
            else cout<<"No";
    }

}