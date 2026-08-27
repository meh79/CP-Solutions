#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a1;
    cin>>a1;
    vector<int> aa(a1);
    for(int i=0;i<a1;i++){
        cin>>aa[i];
    }
    int x;
    cin>>x;
    int a,b;
    cin>>a>>b;
    aa.erase(aa.begin()+x-1);

    // cout<<" case 1"<<endl;
    //   for(int j=0;j<aa.size();j++){
    //     if(j+1==aa.size())cout<<aa[j];
    //     else cout<<aa[j]<<" ";
    // }
    aa.erase(aa.begin()+a-1,aa.begin()+b-1);


    cout<<aa.size()<<endl;
    for(int j=0;j<aa.size();j++){
        if(j+1==aa.size())cout<<aa[j];
        else cout<<aa[j]<<" ";
    }
    cout<<endl;
    return 0;

}