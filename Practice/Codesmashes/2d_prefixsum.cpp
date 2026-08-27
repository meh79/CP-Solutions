#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int q;
    cin>>q;//queries
    n++;
    vector<vector<int>> ara(n, vector<int>(n,0));

    // for(const auto&x :ara){
    //     for(int v: x)cout<<v;
    //     cout<<endl;
    // }
    char c;int bin;
    for(   int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            cin>>c;
            if(c=='*')bin=1;
            else bin=0;
            ara[i][j]=bin;
        }
    }
    //printing the vector
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ara[i][j];
        }
        cout<<endl;
    }

    //2d prefix sum
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            ara[i][j]=ara[i][j]+ara[i][j-1]+ara[i-1][j]-ara[i-1][j-1];
        }
    }
    cout<<endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ara[i][j];
        }
        cout<<endl;
    }

    //creating the 2d prefix sum is done. now making the real ans
int x1, x2, y1, y2, high_up, low_row, high_row, low_column, high_column, center_row, center_column;
     x1 = x2 = y1 = y2 = high_up = low_row = high_row = low_column = high_column =center_row= center_column=0;
    for(int i=0;i<q;i++){
        cin>>x1>>y1>>x2>>y2;
        if(x1>x2){
            high_row=x1;
            low_row=x2;
        }
        else {
            high_row=x2;
            low_row=x1;
        }
        if(y1>y2){
            high_column=y1;
            low_column=y2;
        }
        else {
            high_column=y2;
            low_column=y1;
        }
        int corner=ara[x1-1][y1-1];
        int up_nega = ara[low_row-1][high_column];
        int side_nega = [high_row][low_column-1];

       // int ans=ara[high_row][high_column];

        int ans=ara[x2][y2]- up_nega -side_nega+corner;
        cout<<ans<<endl;
    }


}