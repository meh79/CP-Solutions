#include <bits/stdc++.h>
using namespace std; 
int cha(long long int x){
    string s;
    s=to_string(x);
    vector<int> val;
    int l=s.size();
    for(int i=0;i<l;i++){
        val.push_back(s[i]-'0');
    }
    sort(val.begin(),val.end());
    val.erase(unique(val.begin(),val.end()),val.end());
    if(val.size()>2)return 0;
    else return 1;
}
void solve() {
    int x;
    string s;
    cin>>s;
    x=stoi(s);
    vector<int> val;
    int l=s.size();
    for(int i=0;i<l;i++){
        val.push_back(s[i]-'0');
    }

    for(int i=2;;i++){
        if(cha(i)==1&&cha(x*i)){
            cout<<i<<endl;
            return;
        }
    }
    //cout<<"pay nai"<<endl;

   
    
    // vector<int> a;
    // for(int i=0;)

}

int main() {
    int t;
    cin>>t;
    //int term=1;

    while(t--){

       //cout<<"Case "<<term<<": ";
        solve();
         //term++;
    }
    return 0;
} 