#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];

    }

    //pattern
    /*
        n->odd : n-1/2, n+1/2
        n->even: n/2
    */

    vector<int> b(n,0);
    int val=0;
   sort(a.begin(),a.end());
   for(i=1;i<n;i++){
        if(a[i-1]==a[i]){
            
            b[val]++;
        }
        else {
            b[val]++;
            val++;
        }
    }
    b[val]++;
    int count;
   for(i=0;i<n;i++){
    if(b[i]==0)count++;
   }
  // for(count;count>0;count--)b.pop_back;
  b.resize(val + 1);
//    for(auto x:b)cout<<x<<" ";
//    cout<<endl;
  int number=val+1;

  if(number==1)cout<<"YES"<<endl;
  else if(number==2){
    if(n%2==0){
        if(b[0]==b[1])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else {
        if(b[0]==(n+1)/2||b[0]==(n-1)/2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

  }
  else cout<<"NO"<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--){

        solve();
    }
    return 0;
}