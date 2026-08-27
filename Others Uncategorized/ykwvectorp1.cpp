#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    vector<int> a;
    for(int i=0;i<q;i++){
        int k=0;
        cin>>k;
        switch (k)
        {
            case 0:
                int v;
                cin>>v;
                a.emplace_back(v);
                break;
            case 1:
                int t;
                cin>>t;
                cout<<a[t]<<endl;
                break;
            case 2:
                a.pop_back();
                break;
        }
    }
}