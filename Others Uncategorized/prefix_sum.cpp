#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t;
    // cin>>t;
   long long int n;
    cin>>n;
     cin>>t;
    long long int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    for(int i=1;i<n;i++){
        ara[i]=ara[i]+ara[i-1];

    }
   

    for(int time=0;time<t;time++){
        
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        int sum;
        if(l==0) sum=ara[r];
        else sum=ara[r]-ara[l-1];
        cout<<sum<<endl;
    }
    return 0;
}