#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;cin>>n;
        int ara[n],low;
        for(int j=0;j<n;j++){
            cin>>ara[j];
            if(j==0)low=ara[j];
            else if(ara[j]<low)low=ara[j];
        }
        //cout<<low<<endl;
    
        if(low==0) //direct loop
        {   
            int max=0;
            for(int k=0;k<n;k++){
                if(max<ara[k])max=ara[k];
            }
            cout<<max+1<<endl;
        }
        else if(low<0) //arekta kaj
        {
            int max=0;
            for(int k=0;k<n;k++){
                if(max<ara[k])max=ara[k];
            }
            cout<<max+low+1<<endl;
        }
        else if(low>0) //
        {
            int max=0;
            for(int k=0;k<n;k++){
                if(max<ara[k])max=ara[k];
            }
            cout<<max-low+1<<endl;

        }
    }
}