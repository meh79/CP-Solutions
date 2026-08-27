#include<bits/stdc++.h>
using namespace std;


void reversebin(vector<int>& v){
    vector<int> v2(v.size());
    for(int i=v.size()-1,j=0;i>=0,j<v.size() ;i++,j++){
        v2[j]=v[i];
    }
    if(v==v2)cout<<"Yes"<<endl;
    else cout<<"N0"<<endl;
}
void binary(int a){
    vector<int> v;
    while(a!=0){
        v.push_back(a%2);
        a=a/2;
        // i++;
    }
    vector<int> v1(v.size());
    for(int i=0,j=v.size()-1;i<v.size(),j>=0;j--,i++){
        v1[i]=v[j];

    }
    // //cout<<"printing reverse bin ";
    // for(auto x:v){
    //     cout<<x;
    // }
    // //cout<<endl;
    // //cout<<"Normal bin: ";
    // for(auto x:v1){
    //     cout<<x;
    // }
    // cout<<endl;
    if(v==v1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}



int main()
{

    

    int a;
    vector <int>s;
    cin>>a;
    if(a%2==0){cout<<"NO"<<endl; return 0;}
    
    else {
        binary(a);
       
    }
   


}