#include<bits/stdc++.h>
using namespace std;
void cp()
{
    long long int n;cin>>n;int ara[n+1];
    for(int i=0;i<n;i++)cin>>ara[i];

   long long  int k=1,ans=0;
    ara[n]=INT_MIN;
    for(int i=1;i<=n;i++){
        if(ara[i-1]<=ara[i]){
           // printf("Compare %d,%d\n",ara[i-1],ara[i]);
            k++;}
        
        else{
            //printf("Inside the last condi: k=%d ans=%d\n",k,ans);
            
            ans+=k*(k+1)/2;
            k=1;
           // cout<<"Ans "<<ans<<endl;
        }
        
       // printf("k=%d when i=%d\n",k,i);
    }
    cout<<ans<<endl;
   //e cout<<"Life cdi"<<endl;
    return ;
}
int main(){
    long long int a;
    cin>>a;
    while(a--){
        cp();
    }
    
}

//age count korbe koyta vitor e contigous hbe, n er value diye sum korar por reset khabe
