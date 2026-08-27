#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;

    if(a.length()<b.length()){
        string d;
        d=a;
        a=b;
        b=d;
    }
    //cout<<"Works"<<endl;
    //a is big always

    /*
    abcsad
    asdadadad

    */


    for(int i=0;i<a.length();i++){
        if(a[i]>b[i]){
            cout<<b<<endl;
            return 0;
        }
        else if(b[i]>a[i]){
            cout<<a<<endl;
            return 0;
        }
    }
    cout<<a<<endl;

}