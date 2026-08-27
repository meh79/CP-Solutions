#include <bits/stdc++.h>
using namespace std; 



int main() {
     int n;
    cin>>n;
    int ara[n];
    cin>>ara[0];
    int low=abs(ara[0]);
    for(int i=1;i<n;i++){
        cin>>ara[i];
        if(abs(ara[i])<low)low=abs(ara[i]);
    }
    cout<<low<<endl;
    return 0;
}