#include <bits/stdc++.h>
using namespace std; 

void solve() {
    long long int ara[3];
    for(int i=0;i<3;i++)cin>>ara[i];
    sort(ara,ara+3);
    if((ara[0]+ara[1])<ara[2])ara[2]=ara[0]+ara[1];
    cout<<ara[2]-ara[0]<<endl;

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