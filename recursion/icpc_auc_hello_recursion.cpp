#include <bits/stdc++.h>
using namespace std; 
const int N=10e5+10;
int ara[N];
int sum=0;

int pp(int n){
    //base case
    if(n==-1)return sum;
    sum+=ara[n];
    //recursive case
   // cout<<"ara["<<n<<"]=" <<ara[n]<<" && "<<"Sum="<<sum<<endl;
    return pp(n-1);

}
void solve() {
    sum=0; 
    int n;
    cin>>n;
    for(int i=0;i<n;i++){cin>>ara[i];}

    int a=pp(n-1);
    cout<<a<<endl;
}

int main() {
    int t;
    cin>>t;
    int term=1;

    while(t--){

        cout<<"Case "<<term<<": ";
        solve();
        term++;
    }
    return 0;
}