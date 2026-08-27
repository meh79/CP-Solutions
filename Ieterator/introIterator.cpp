#include<bits/stdc++.h>
using namespace std;
int main(){
    // set<int> s1;

    // set<int> s2={1,2,3,2,1};

    // for(auto& x:s2)cout<<x<<" ";
    // cout<<endl;
    set<int> s={1,1321,23,0,13,-1};
    int small=*s.begin();
    int large=*s.rbegin();

    cout<<small<<endl<<large<<endl;


    auto it = s.find(1321);

    if(it!=s.end()){
            cout<<"Found: "<<*it<<endl;

        }
    
    else cout<<"Not found"<<endl;
    
    //acessing the last elements previous element
    auto x=s.end();
    --x;
    --x;
    cout<<*x<<endl;

    /*alternative last value checking method*/
    cout<<*prev(s.end())<<endl;
    cout<<*s.rbegin()<<endl;

    //iterator is a pointer so you need to dereference it to show output


    //now doing it for binary search

    auto b= s.lower_bound(1322);//value
    if(b!=s.end()){
        cout<<"First element >=(value) is "<<*b<<endl;

    }
    else cout<<"Not found"<<endl;
    b=s.upper_bound(12);
    if(b!=s.end()){
        cout<<"First element > (value) is "<<*b<<endl;
    }


    return 0;


}
