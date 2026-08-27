#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
   // cout<<s<<endl;
    //counting
   // char c=s[0];
    int count=1,m=0;;
    int i;
    int count1;
    for(i=1;i<=n;i++){
        if(s[i]!=s[i-1]){
            count1++;  
        }
    }
    count=1;
    int ara[count1];//making array size
    int a=0;

    //creating loop for making count on letters
     for(i=1;i<=n;i++){
        if(s[i]==s[i-1]){count++;
           // cout<<s[i]<<endl;
        }
        else{
            ara[a]=count;
            a++;
            count=1;
        }
    }
    //print the word times
    // for(int i=0;i<count1;i++)cout<<ara[i]<<" ";
    // cout<<endl;
    ///now will fix the problem?

    //variable for counting
    int count_odd=0;
    int count_1=0,even_count=0;

    //loop for counting categories of frequencies
    for(int i=0;i<count1;i++){
        if(ara[i]==1)count_1++;
        if(ara[i]%2!=0)count_odd++;
        if(ara[i]%2==0)even_count++;
    }
    count_odd=count_odd-count_1;
    // cout<<"Pureodd= "<<count_odd<<endl;
    // cout<<"1 count= "<<count_1<<endl;
    // //int even_count=n-count_odd-count_1;
    // cout<<"Even count= "<<even_count<<endl;
    //without 1
    //all even
    if(n%2==0){
        if(count_odd==0&&count_1==0){cout<<"YES"<<endl;return;}
;
    } 
   // if(count_1>2){cout<<"NO"<<endl;return;}
    if(count_1==0){
        if(n%2==0&&count_odd>3)cout<<"NO"<<endl;
        else if(n%2!=0&&count_odd>2)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    else if(count_1){
        if(n%2==0&&(count_odd+count_1)>1)cout<<"NO"<<endl;
        else if(n%2!=0&&(count_odd+count_1)>2)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
    
    
 
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