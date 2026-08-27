#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;cin>>n;
    vector<int> ara(n),b;
    for(int i=0;i<n;i++){
        cin>>ara[i];
        b.push_back(ara[i]);

    }
    sort(b.begin(),b.end());
    if(ara!=b){
        cout<<"0"<<endl;
        return;
    }


    long long int dif,min=INT_MAX;
    int store;
    for(int i=1;i<n;i++){
        dif=abs(ara[i-1]-ara[i]);
        if(dif<min){
            min=dif;
            store=i;
        }
        
        // cout<<"MIN: "<<min<<endl;
    }
   // cout<<"Dif "<<dif<<endl;
    cout<<(min/2)+1<<endl;
   // cout<<store<<endl;
    //we found the index now find how many time?

}   

int main() {
    int t;
    cin>>t;
   // int case1=1;
    while(t--){
        //cout<<"Case "<<case1<<": ";
        solve();
        //case1++;
    }
    return 0;
}