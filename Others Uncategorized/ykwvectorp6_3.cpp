#include<bits/stdc++.h>
using namespace std;

void p(vector<int>& aa){
    for(auto x:aa){
        cout<<x<<" ";
    }
    cout<<endl;
    return ;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;
    cin>>q; 
    int val=0,count=0;
    int j=0;
    int store=0;
    for(int i=0;i<q;i++){
        cin>>val;
        count=0;

        for(;j<n;j++){
           cout<<"a["<<j<<"] is "<<a[j]<<" and val = "<<val<<endl;
           if(val>a[j]){break;}
            else if(a[j]==val){
               // cout<<"The value of inner j is "<<j<<endl;
                cout<<"Yes "<<j+1<<endl;
                //store=j;
                //cout<<"val-> "<<val<<" j-> "<<j <<" Yes "<<j+1<<endl;
                count=1;
                
                break;
            
            }
            



        }
       // j=store;
        if(count==0){
            for(;j<n;j++){
                if(val<a[j]){cout<<"No "<<j+1<<endl; break;}

            }
        }

    }
    return 0;

}

