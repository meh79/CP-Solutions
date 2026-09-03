//pure recursion (standard & recommended)
//all sum create ber korar recursion

#include<bits/stdc++.h>
using namespace std;

const int N=1000+10;//limits max value is given
int ara[N];

//1. pure recursion

int pp(int n){
    //base case
    if(n==-1)return 0;

    return ara[n]+pp(n-1);
}
void solve(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++)cin>>ara[i];
    int a=pp(n-1);
    cout<<a<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if(cin>>t){
        int term=1;
        while(t--){
            cout<<"Case "<<term<<": ";
            solve();
            term++;
        }
    }
    return 0;
}