#include<bits/stdc++.h>
using namespace std;
void y(){
cout<<"Yes"<<endl;
}

void n(){cout<<"No"<<endl;}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    for(int x=0;x*a<=c;x++){
        if((c-x*a)%b==0){y();return 0;}
    }
    n();
   return 0;
}

/*

ebony-a hp
Ivory-b hp5_5

total c hp



*/  