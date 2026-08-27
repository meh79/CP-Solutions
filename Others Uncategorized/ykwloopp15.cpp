#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    int sum=0;
    for(int i=0;i<t;i++){
        int m,n;
        cin>>m>>n;
        sum=0;
        if(m>n)swap(m,n);
        for(int i=m+1;i<n;i++){
            if(i%2!=0)sum+=i;
        }
        cout<<sum<<endl;
    }
}