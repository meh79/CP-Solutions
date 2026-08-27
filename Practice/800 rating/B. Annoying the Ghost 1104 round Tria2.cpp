#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;//number of piles of ducks
    cin>>n;
    int ara1[n],ara2[n],sort_copy[n];
    int i;
    for(i=0;i<n;i++){
        cin>>ara1[i];
        
    }//initial number ducks
    for(i=0;i<n;i++){cin>>ara2[i];sort_copy[i]=ara2[i];}//final number ducks

    sort(sort_copy,sort_copy+n);
     if(sort_copy[n-1]>ara2[n-1]){
        //printf("sort_copy[n-1]=%d ara2[n-1]=%d\n",sort_copy[n-1],ara2[n-1]);
        cout<<"-1"<<endl;return;
    }

    //main algorithm
    //ara1 is pivot
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ara2[j]>=ara1[i]&&ara2[j]!=-1){
                ara1[i]=ara2[j];
                ara2[j]=-1;
                break;
            }
        }
    }
    //checking every element
    

    //swaping calculate algorithm
    int val1=0;
    for(int j=0;j<n;j++){
        for(int  k=j+1;k<n;k++){
            if(ara1[j]>ara1[k]){
                swap(ara1[j],ara1[k]);
                val1++;
            }
        }
    }
    for(i=0;i<n;i++){
        if(ara1[i]!=sort_copy[i]){
            cout<<"-1"<<endl;
            return ;
        }
    }

    // //print
    // cout<<"Ara1: ";
    // for(i=0;i<n;i++)cout<<ara1[i]<<" ";
    // cout<<endl;

    // cout<<"Ara2: ";
    // for(i=0;i<n;i++)cout<<sort_copy[i]<<" ";
    // cout<<endl;
    cout<<val1<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--){

        solve();
    }
    return 0;
}