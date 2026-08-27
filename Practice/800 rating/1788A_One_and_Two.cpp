#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    int ara[n];
    int count_2=0;
    for(int i=0;i<n;i++){cin>>ara[i];if(ara[i]==2)count_2++;}   
    if(count_2==0)cout<<"1"<<endl;
    else if(count_2%2!=0)cout<<"-1"<<endl;
    else {2
        int mid=count_2/2;
        int count=0;
        for(int i=0;i<n;i++){
            if(ara[i]==2)count++;
            if(count==mid){cout<<i+1<<endl;return;}
        }
    }

}

int main() {
    int t;
    cin>>t;
    //int term=1;

    while(t--){

       //cout<<"Case "<<term<<": ";
        solve();
         //term++;
    }
    return 0;
}