#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int test=0;test<t;test++){
        
        int n;
        cin>>n;
        int ara[n],div[n-1];
        for(int i=0;i<n;i++){
            cin>>ara[i];
        }
        int predif=0;
        for(int i=0;i<n;i++){
            if(i==n-1)break;
            predif=abs(ara[i]-ara[i+1])+predif;
        }
        //corner case bade e kaj korbo
        int sum=0;
        int ans=predif;
        for(int i=0;i<n;i++){
            if(i==0){sum= predif-abs(ara[0]-ara[1]);}
            else if(i==n-1){sum=predif-abs(ara[n-2]-ara[n-1]);}
            else {
            sum=predif-abs(ara[i-1]-ara[i])-abs(ara[i]-ara[i+1])+abs(ara[i-1]-ara[i+1]);}
            
            if(sum<ans) ans=sum;
            // cout<<i<<" sum "<<sum<<endl;
            // cout<<i<<" ans "<<ans<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}