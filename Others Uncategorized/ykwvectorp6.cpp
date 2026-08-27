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
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;
    cin>>q; 
    int val=0,count=0,count2=0;
    for(int i=0;i<q;i++){
        cin>>val;
        // if(val==a.back()){cout<<"Yes "<<n<<endl;continue;}
        // else if(val>a.back()){cout<<"No"<<endl;continue;}
        count=0;
        count2=0;
    
        for(int j=0;j<n;j++){
            if(a[j]==val){
                cout<<"Yes "<<j+1<<endl;
                //cout<<"val-> "<<val<<" j-> "<<j <<" Yes "<<j+1<<endl;
                count=1;
                break;
            }

        }
        if(count==0){
            for(int j=0;j<n;j++){
                if(val<a[j]){cout<<"No "<<j+1<<endl; count2=1;break;}

            }
            
        }

    }
    return 0;


}

/*
                               statements on what they want
    
    method 1 bar bar copy kore input pushback kore memory te dhukano. Idea hoitese sort kore nea then i th value pawar por ta theke ek boro konta ta print mara?

    method 2 


*/