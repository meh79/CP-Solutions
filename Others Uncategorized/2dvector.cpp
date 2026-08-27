#include<bits/stdc++.h>
using namespace std;
void pro(vector<vector <int>>& a);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<int>> vec={{2,3},{2,5,6,7},{9},{9,8,19}};
    //this is  a jagged 2d vector
    //printing it
       vec.back().push_back(1000);
    for(int i=0;i<vec.size();i++){
        cout<<i<<"->";
        for(int j=0;j< vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    //for using pushback

    vector<vector<int>> ve;
    //adding rows dynamically

    ve.push_back({1,2,3,4});
    ve.push_back({1,2,324324,5});
    //ve.push_back(1);
    for(int i=0;i<ve.size();i++){
        cout<<i<<" -> ";
        for(int j=0;j<ve[i].size();j++){
        cout<<ve[i][j]<<" ";            
        }
        cout<<endl;
    }

    //suppose you want to add last element to the last row, then you would have to use following methods

    //method 1 back()+push_back()]
    ve.back().push_back(1000);
    for(int i=0;i<ve.size();i++){
        cout<<i<<" -> ";
        for(int j=0;j<ve[i].size();j++){
        cout<<ve[i][j]<<" ";            
        }
        cout<<endl;
    }

    //method 2 size()-1
    if(!ve.empty()){
        ve[ve.size()-1].push_back(9999);
    }
    ve[0].push_back(123455);
    for(int i=0;i<ve.size();i++){
        cout<<i<<" -> ";
        for(int j=0;j<ve[i].size();j++){
            cout<<ve[i][j]<<" ";

        }
        cout<<endl;

    }

    cout<<"Here is the function you used in the global function"<<endl;
    pro(ve);
    return 0;

    //method 3 korte iterator lagbe ja parina
    
}

void pro(vector<vector <int>>& a){
    for(int i=0;i<a.size();i++){
        cout<<i<<" -> ";
        for(int j=0;j<a[i].size();j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}