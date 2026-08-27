#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    int freq[100000]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        freq[a[i]]++;
    }
    int count=0;
    for(int i=0;i<m;i++){
        cin>>b[i];
        if(freq[b[i]])count++;
    }
    if(count==m)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;

}