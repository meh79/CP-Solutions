#include <bits/stdc++.h>
using namespace std; 
int check(int n){
    string s=to_string(n);
    int l=s.length();
    int count=0;
    
    for(int i=0;i<l;i++){

        //printf("For s[%d] = %c\n",i,s[i]);
        if(s[i]=='0')count++;

    }
    if(count==l-1)return 1;
    else return 0;
}
void solve() {
        int n;
        cin>>n;
        int count=0;
        for(int i=1;i<=n;i++){
            //cout<<"Number = "<<i<<endl;
            count+=check(i);

        }
        cout<<count<<endl;

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