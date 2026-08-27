#include <bits/stdc++.h>
using namespace std; 

void solve() {
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   
   int x=abs(a-c);
   int y=abs(b-d);

   if(x>y&&b!= d){

    cout<<"-1"<<endl;
    //printf("(x,y)->(%d,%d)\n",x,y);
    return;
   }
   int ans=(d-b+(a+d-b)-c);
   cout<<abs(ans)<<endl;


}

int main() {
    int t;
    cin>>t;
    //int term=1;

    while(t--){

       //cout<<"Case "<<term<<": ";
        solve();
         //term++;
    }
    return 0;
}