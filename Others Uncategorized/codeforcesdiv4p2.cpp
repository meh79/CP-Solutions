#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int n;cin>>n;
        int ara[n];
        int max=0;
        for(int j=0;j<n;j++){  
            cin>>ara[j];
            if(ara[j]>max)max=ara[j];
        }
        cout<<max*n<<endl;
    }
}