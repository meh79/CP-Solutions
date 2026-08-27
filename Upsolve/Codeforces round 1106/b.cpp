#include <bits/stdc++.h>
using namespace std; 
long long int lcm(long long int a,long long int b){   
    long long int val=gcd(a,b);
    long long int ans=(a/val)*b;
    return ans;
    
}
void solve() {
    long long int n;
    cin>>n;

    //min n=1 
    //now tinta loop e a,b,c khabe?
    // ...???
    //banailam o(n^3) er jinis dekhi ki hoty
    long long int count=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                int a=i,b=j,c=k;
                   //cout<<a<<" "<<b<<" "<<c<<endl;
                   long long int firstpart=lcm(a,b);
                   long long int secondpart=lcm(b,c);
                   long long int val=gcd(firstpart,secondpart);
                   long long int leftside=gcd(a,c);
                    
                   if(val==leftside){
                    count++;
                    //cout<<a<<" "<<b<<" "<<c<<endl;
                   }
            }
        }
    }
    cout<<count<<endl; 
    //cout<<"End of occurance"<<endl<<endl;
    return ;
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