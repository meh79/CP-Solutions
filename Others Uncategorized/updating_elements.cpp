#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string> m;
    m={{1,"abra"}, {2,"ka"},{3,"dabra"}};

    //updating value
    m[-1]="Tweaks";
   // m.at(0)="By";

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<m[-1]<<endl;
    return 0;
}