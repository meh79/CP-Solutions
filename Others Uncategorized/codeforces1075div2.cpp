#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tt=0;tt<t;tt++){
        //n,h,l
        int n,h,l;
        cin>>n>>h>>l;
        int ara[n];
        for(int i=0;i<n;i++)cin>>ara[i];
        int k=floor(n/2);
        //final ans k theke besi hbe na
        int count=0;
        //loop for making pair
        for(int i=0;i<n-1;i++){
            if(ara[i]<=h&&ara[i+1]<=l){
                count++;
                if(count==k)break;
            }
        }
        cout<<count<<endl;

    }
    return 0;
}
