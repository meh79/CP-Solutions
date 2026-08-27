#include<bits/stdc++.h>
using namespace std;
void fast_io() {
    // Disables synchronization between C and C++ standard streams
    ios_base::sync_with_stdio(false);
    
    // Unties cin from cout (stops automatic flushing before input)
    cin.tie(NULL);
}
int main(){
    //
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s ;
    cin>>s;
    sort(s.begin(),s.end(),greater<int>());
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<endl;
    }
}