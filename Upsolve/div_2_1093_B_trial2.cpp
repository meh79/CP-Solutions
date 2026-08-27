#include<bits/stdc++.h>
using namespace std;
void cp()
{
    int n,m;cin>>n>>m;

    int a,c,mx=1,cnt=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(i==0){
            c=a;
            cnt=1;
        }
        else if(a==c)cnt++;
        else if(a!=c){
            c=a;
            //printf("Inner loop case i %d:\n  c=%d, a=%d, cnt=%d")
            
            mx=max(mx,cnt);
            cnt=1;
        }
        
    }
    mx = max(mx, cnt);
   // cout<<"max= "<<mx<<" cnt= "<<cnt<<endl;
    if(mx>=m)cout<<"NO\n";
    
    else cout<<"YES\n";


    return ;
}

int main(){
    int t;
    cin>>t;
    //cout<<"For test case t: "<<t<<endl;
    while(t--)cp();

    return 0;
}