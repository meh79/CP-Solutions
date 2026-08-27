#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;//number of piles of ducks
    cin>>n;
    int ara1[n],ara2[n],sort_copy[n];
    int i;
    for(i=0;i<n;i++){
        cin>>ara1[i];
        sort_copy[i]=ara1[i];
    }//initial number ducks


    for(i=0;i<n;i++)cin>>ara2[i];//final number ducks

    sort(sort_copy,sort_copy+n);
    //print
    // cout<<"sort_copy: ";
    // for(i=0;i<n;i++)cout<<sort_copy[i]<<" ";
    // cout<<endl;

    // cout<<"Ara2: ";
    // for(i=0;i<n;i++)cout<<ara2[i]<<" ";
    // cout<<endl;

    //case 0: where the value will be -1
    if(sort_copy[n-1]>ara2[n-1]){
        //printf("sort_copy[n-1]=%d ara2[n-1]=%d\n",sort_copy[n-1],ara2[n-1]);
        cout<<"-1"<<endl;return;
    }

    //case 1: where the value will be 0
    int val=0;
    // for(i=0;i<n;i++){
    //     if(ara1[i]==sort_copy[i])val++;
    // }
    // if(val==n){cout<<"0"<<endl;return;}

    //how to calculate alternative stage 1
    val=0;
    for(i=0;i<n;i++){
        if(ara1[i]<=ara2[i])val++;
    }
    if(val==n){cout<<"0"<<endl; return;}

    //case where the value will be by forming stage 2

    //case 2: how to calculate swap+stage 1
    for(i=0;i<n;i++){
        if(ara2[i]==sort_copy[i])val++;
    }
    if(val!=n){
        
        cout<<"IDK"<<endl;
        return;
    
    }



    //case 3: calculating how many swaps
    int val1=0;
    for(int j=0;j<n;j++){
        for(int  k=j+1;k<n;k++){
            if(ara1[j]>ara1[k]){
                swap(ara1[j],ara1[k]);
                val1++;
            }
        }
    }
    cout<<"Swapping values: "<<val1<<endl;

    return;



}

int main() {
    int t;
    cin>>t;

    while(t--){

        solve();
    }
    return 0;
}