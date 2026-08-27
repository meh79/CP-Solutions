#include <bits/stdc++.h>
using namespace std; 

void solve() {
    
}

int main() {
    FILE *math, *english, *bangla, *result;
    char *math_file="math.txt", *bangla_file="bangla.txt", *english_file="english.txt", *result_file="result.txt";
    math=fopen(math_file,"r");
    bangla=fopen(bangla_file,"r");
     english=fopen(english_file,"r");
    result=fopen(result_file,"w");
    int m[10],b[10],en[10],re[10];
    char line[80];

    int roll=0,num=0;

    for(int i=0;i<10;i++){
        fgets(line,80,math);
        roll=0,num=0;
        sscanf(line,"%d %d", &roll, &num );
        m[i]=num;  

        //bangla
        fgets(line,80,bangla);
        roll=0,num=0;
        sscanf(line,"%d %d", &roll, &num );
        b[i]=num;  
        
        //engllish
        fgets(line,80,english);
        roll=0,num=0;
        sscanf(line,"%d %d", &roll, &num );
        en[i]=num;
        
        re[i]=(m[i]+b[i]+en[i])/3;
    }
    cout<<"MATH: "<<endl;
    for(int i=0;i<10;i++)cout<<m[i]<<" ";
    cout<<endl;
    cout<<"BANGLA: "<<endl;
    for(int i=0;i<10;i++)cout<<b[i]<<" ";
    cout<<endl;
    cout<<"ENGLISH "<<endl;
    for(int i=0;i<10;i++)cout<<en[i]<<" ";
    cout<<endl;
    cout<<"RESULT "<<endl;
    for(int i=0;i<10;i++)cout<<re[i]<<" ";
    cout<<endl;


    for(int i=1;i<11;i++){
    fprintf(result,"Roll: %d total result is= %d\n",i,re[i-1]);
    }
    return 0;
}