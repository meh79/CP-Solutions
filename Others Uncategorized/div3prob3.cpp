#include<bits/stdc++.h>
using namespace std;
int main(){

    
    int t;
    cin>>t;
    for(int j=0;j<t;j++){  
        int n;

        cin>>n;
        
        vector <int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        // for(int i=0;i<n;i++){[]
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
        // sort(a.begin(),a.end());
        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
        /*array sort korar por min value ekta base asn hbe*/
        int ans=a[0];
        int otherAns=a[n-1];//other ans er limit max value porjonto rakha
        /*ekhn arekta ans ber korte gele second value y=x+c diye korbo naki for loop marbo? loop mara better cz it cant always be the second one.
        x=y-c*/
        
        otherAns=a[1]-ans;

        cout<<max(ans,otherAns)<<endl;

    }
    return 0;

}