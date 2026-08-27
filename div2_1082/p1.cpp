#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int x,y;
        cin>>x>>y;
        if((x==2&&y==1)||(x==3&&y==0)||(x==4&&y==-1)){cout<<"YES"<<endl;}
        else if(y==0&&x%3==0)cout<<"YES"<<endl;
        else if(y<=-1&&x<4)cout<<"NO"<<endl;
        else if(y>1&&x<=2)cout<<"NO"<<endl;
        else if(y==-1&&x%4==0)cout<<"NO"<<endl;
        else if(x/2==y||x/4==y*-1)cout<<"YES"<<endl;
        else if(y==1&&x%2==0){
            int innerloop=true;
            while(innerloop){
                x=x-2;
                if(x>3)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                innerloop=false;
            }
        }
        else cout<<0<<endl;
    }
}