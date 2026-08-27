#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a;
   cin>>a;
   int ara[a];
   for(int i=0;i<a;i++){
    cin>>ara[i];
   }
   
   //selection sort 
   /*method min temp ber kora*/
   int min;
   for(int i=0;i<a-1;i++){
    min=i;
        for(int j=i+1;j<a;j++){
            if(ara[min]>ara[j])min=j;
        }
        if(min!=i) swap(ara[i],ara[min]);

        cout<<"Iteration "<<i<<"-> ";
        for(int k=0;k<a;k++){
        cout<<ara[k]<<" ";

        }cout<<endl;
   }

   for(int i=0;i<a;i++)cout<<ara[i]<<" ";
}