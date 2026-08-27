#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());

    char c=s[0];
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!=c){
            cout<<c<<" : "<<count<<endl;
            c=s[i];
            count=0;
            
        }
        else {
            for(int j=0;j<s.length();j++){
                if(c==s[j]){
                   
                    count++;
                     //printf("Found %c = %dth\n",c,count);


                }

            }
        }
        i=i+count-1;
    }
    cout<<c<<" : "<<count<<endl;
}

//suppose linear hoilo, tahole oitar sathe value add kora gelo
