#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
   int a;
   cin>>a;
   int ara[a+1];
   for(int i=1;i<=a;i++){
    cin>>ara[i];
   }

   //  for(int i=1;i<=a;i++){
   //  cout<<ara[i]<<" ";
   // }
   // cout<<endl;
// prefix sum ekhan theke start
   ara[0]=0;
//lets copy it

   int copy[a+1];
   for(int i=1;i<=a;i++){
    copy[i]=ara[i];
   }

   copy[0]=0;
   // //printing the copy
   //  for(int i=0;i<=a;i++){
   //  cout<<ara[i]<<" ";
   // }
   // cout<<endl;

   //main prefix sum
   for(int i=1;i<=a;i++){
    ara[i]=copy[i]-copy[i-1];
   }
   
    for(int i=1;i<=a;i++){
    cout<<ara[i]<<" ";
   }

   return 0;


}