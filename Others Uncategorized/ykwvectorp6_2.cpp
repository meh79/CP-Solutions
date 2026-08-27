#include<bits/stdc++.h>
using namespace std;

void p(vector<int>& aa){
    for(auto x:aa){
        cout<<x<<" ";
    }
    cout<<endl;
    return ;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    int val;
   // a.resize(n+q);
    int count=0;
    for(int k=0;k<q;k++){
        cin>>val;
        count=0;
        for(int i=0;i<n;i++){
            if(val==a[i]){
                cout<<"Yes "<<i+1<<endl;
                count=1;
                break;
            }
        }
        if(count==0){
            vector<int> b(a);
            //p(b);
            b.push_back(val);
            sort(b.begin(),b.end());
           // p(b);
            for(int k=0;k<n+1;k++){
                if(val==b[k]){
               cout<<"No "<<k+1<<endl;
                break;}
            }
        }
    }
}

/*
ekta kaj kor , new ekta vector ne jetate unique kora hbe

*/