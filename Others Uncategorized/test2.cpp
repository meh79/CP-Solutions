#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> vec={{2,3},{2,5,6,7},{9},{9,8,19}};
    //this is  a jagged 2d vector
    //printing it

    for(int i=0;i<vec.size();i++){
        cout<<i<<"->";
        for(int j=0;j< vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}