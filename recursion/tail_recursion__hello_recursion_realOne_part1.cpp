//taile recursion using an accumulator parameter
/*In this method, instead of relying on a global variable, we pass the running sum as a second parameter (current_sum) from one function call to the next.*/
#include<bits/stdc++.h>
using namespace std;

const int N=1000+10;
int ara[N];

//2.tail recursion

//we pass current sum along to keep track of our total
int PP(int n,int current_sum){
    //base case: if indec drops below 0, we are done . Return the total sum
    if(n==-1)return current_sum;

    //recursive case:pass the updated sum down to the next function call
    return pp(n-1,current_sum+ara[n]);

}

void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }

    //call the recursive function starting from the last index (n-1)
    int a=pp(n-1,0);
    cout<<a<<"\n";

}

int main(){
    //fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if(cin>>t){
        int term=1;
        while(t--){
            cout<<"Case "<<term<<": ";
            solve();
            term++;
        }
    }
    return 0;
}