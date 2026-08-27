#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    //char a[5000];
    string a;
    int i =0;
    char sign;
    while(cin.get(c))
    {   
        
        if(c=='+'||c=='-'||c=='*'||c=='/'){sign=c;break;}
        else a+=c;i++;
    }
   // scanf("%[^+*/-]",&a);
    int j=0;
   //  cin.ignore();
    //while(a[j]!='\0'){cout<<a[j];j++;}
    // cout<<a;
    // cout<<endl;

    string s;
    cin>>s;
    //cout<<s;

    int num1=stoi(a);
    int num2=stoi(s);

    if(sign=='+')cout<<num1+num2<<endl;
    else if(sign=='-')cout<<num1-num2<<endl;
    else if(sign=='*')cout<<num1*num2<<endl;
    else cout<<num1/num2<<endl;

    return 0;
}