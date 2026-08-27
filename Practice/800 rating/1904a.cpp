#include <bits/stdc++.h>
using namespace std; 
void add_if_unique(vector<pair<int,int>>& vec, int new_x, int new_y){
    bool found=false;

    // the bouncer
    for(const auto& p : vec){
        if(p.first==new_x && p.second==new_y){
            found=true;
        }
    }

    //if no duplicate was found 
    if(found==false){
        vec.push_back(make_pair(new_x,new_y));
    }
}
void solve() {
    int a,b,x,y,x1,y1;
    cin>>a>>b>>x>>y>>x1>>y1;

    vector<pair<int,int>> alpha;
    vector<pair<int,int>> bravo;
    // King's moves (alpha)
    add_if_unique(alpha, x+a, y+b);
    add_if_unique(alpha, x+a, y-b);
    add_if_unique(alpha, x-a, y+b);
    add_if_unique(alpha, x-a, y-b);
    add_if_unique(alpha, x+b, y+a);
    add_if_unique(alpha, x+b, y-a);
    add_if_unique(alpha, x-b, y+a);
    add_if_unique(alpha, x-b, y-a); // 

    // Queen's moves (bravo)
    add_if_unique(bravo, x1+a, y1+b);
    add_if_unique(bravo, x1+a, y1-b);
    add_if_unique(bravo, x1-a, y1+b);
    add_if_unique(bravo, x1-a, y1-b);
    add_if_unique(bravo, x1+b, y1+a);
    add_if_unique(bravo, x1+b, y1-a);
    add_if_unique(bravo, x1-b, y1+a);
    add_if_unique(bravo, x1-b, y1-a); // 

    int count=0;
    for(const auto& p: alpha){
        int f=p.first;
        int f2=p.second;
        for(const auto& p1: bravo){
            if(f==p1.first&&f2==p1.second)count++;
        }
    }
    cout<<count<<endl;
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