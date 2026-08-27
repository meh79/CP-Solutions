#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    for(int j=0;j<t;j++) {  
        int n;
        cin>>n;
        long long int output=1;
        for(int i=1;i<=n;i++){
            output=output*i;
        }
        cout<<output<<endl;

    }
    return 0;

}   