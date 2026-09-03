#include<bits/stdc++.h>
using namespace std;

const int ways=0;
void pp(int s,int e,int ways){
    if(s>e)return;
    if(s==e)ways++;


    return pp(s+1,e,ways);
    return pp(s+2,e,ways);
    return pp(s+3,e,ways);

}

int main(){
    int start,end;
    cin>>start>>end;

    cout<<ways<<endl;
}