#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
//testcases
    for(int time=0;time<t;time++){  

//Initializing Value
        int n,k;
        string s;
        cin>>n>>k>>s;
        int sub=n-k+1;
        int sub2=0;
        int ara[n];
         int kala=n;
//Finding 1 and 0's
        for(int i=0,l=1;i<n;i++){
            int end=i+k-1;
            int m=0;
            if(end>=n)end=end-n;
            for(int j=i;j<=end;j++){
                if(s[j]=='0'){

                    m++;
                }
            }
            if(m>0)sub2++;
            if(s[i]=='0'){
                ara[i]=kala;
                kala=kala-1;
            }
            else {
                ara[i]=l;
                l++;
            }
        }

        if(sub2!=sub){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        
       
//Printing these if yes
        for(int i=0,l=1;i<n;i++){
             if(i==n-1)cout<<ara[i]<<endl;
            else {
                cout<<ara[i]<<' ';
            }
        }
        

    }
    return 0;
    
}