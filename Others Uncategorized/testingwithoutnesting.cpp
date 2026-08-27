#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    for(int ti=0;ti<t;ti++){  
        int n,k;
        string s;
        cin>>n>>k>>s;

        int sub=n-k+1;
        int sub2=0;
        int ara[n];

        int end=0,m=0;
    //doing without nesting
        for(int i=0,j=0;i<n-k+1;){
            end=i+k-1;
            // cout<<"When i "<<i<<" end "<<end<<endl;
            // cout<<"Then j "<<j<<endl;
            if(j<=end){
                if(s[j]=='0'){
                    m++;
                }
            }
            // cout<<"Then m "<<m<<endl;
            // cout<<"Before sub2 "<<sub2<<endl;
            if(j==end){
                if(m>0){
                    sub2++;
                }
                m=0;
                i++;
                j=i;

            }
            else j++;
            // cout<<"After sub2 "<<sub2<<endl;
            // cout<<"After i "<<i<<" end "<<end<<endl;
            // cout<<"After j "<<j<<endl<<endl<<endl;
        }
        //cout<<"Finalsub2 "<<sub2<<endl;
        if(sub2!=sub){
                cout<<"NO"<<endl;
                continue;
            }
            cout<<"YES"<<endl;
            
            int kala=n;
            // for(int i=0;i<n;i++){
            //     ara[i]=0;
            // }
            // else cout<<"YES"<<endl;

            for(int i=0,l=1;i<n;i++){
                if(s[i]=='0'){
                    ara[i]=kala;
                    kala=kala-1;
                }
                
                else {
                    ara[i]=l;
                    l++;
                }
                if(i==n-1)cout<<ara[i]<<endl;
                else {
                    cout<<ara[i]<<' ';
                }
            }
        
            // for(int i=0;i<n;i++){
            //     if(i==n-1)cout<<ara[i]<<endl;
            //     else {
            //         cout<<ara[i]<<' ';
            //     }
            // }
        
    }   
        return 0;

}
