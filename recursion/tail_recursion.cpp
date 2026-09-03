/*tail recursion:
here we dont use extra memory
We just use an parameterr within the recursion function, we dont need an global variable to store or do multiplication or other things

Tail recursion is a specific form of recursion where the recursive call is the absolute last operation executed in the function. Once the recursive call returns a value, the current function does no further computation and simply returns that value immediately.

The distinction is critical because it fundamentally changes how a compiler manages memory on the call stack.

*/

#include<bits/stdc++.h>
using namespace std;
const int N=1000+10;
int ara[N];

int pp(int n,int current_sum){
    if(n==-1)return current_sum;
    
    return pp(n-1,current_sum+ara[n]);
}

int main(){
    int t;cin>>t;
    int term=1;
    while(t--){
        cout<<"Case "<<term<<": ";
        term++;
        int n;
        cin>>n;
    for(int i=0;i<n;i++)cin>>ara[i];
        cout<<pp(n-1,0)<<endl;
    }
}
