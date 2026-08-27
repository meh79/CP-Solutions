#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    cout<<"n="<<n<<endl;
    int ara[n];
    for(int i=0;i<n;i++)cin>>ara[i];

    sort(ara,ara+n);


    int round=0;
    int count=1;
    int i;
    vector<pair<int,int>> p;
    for( i=1;i<n;i++){
        if(ara[i-1]==ara[i]){   count++;
        }
        else {
            
            p.emplace_back(ara[i-1],count);count=1;
        }
    } 
    p.emplace_back(ara[i-1],count);  
    for(int i=0;i<n;i++)cout<<ara[i]<<" ";
    cout<<endl;
    for(auto &x:p){
        cout<<x.first<<" , "<<x.second<<endl;
    }

    //Now trying to find the maximum one    
    int m=p[0].second;

    
    int mid=1;
    for(auto x:p){
        if(x.second>m){
            m=x.second;
            mid=x.first;
        }
    } 
    
    
    cout<<"The max="<<m<<" mid="<<mid<<";"<<endl;
    int count2=n-m;
    cout<<"Court2="<<count2<<endl;
    if(count2%2!=0)count2++;
    round=count2/2;

    cout<<"It takes "<<round<<" turns"<<endl;
}

int main() {
    cout<<ceill(1/2);
    int t;
    cin>>t;
    while(t--){
        cout<<"For test case "<<t+1<<" :"<<endl;
        solve();
    cout<<endl;
    }
    return 0;
}