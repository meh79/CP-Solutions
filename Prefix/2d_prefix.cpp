#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;

    // Fix 1: Vector size (n + 1) without modifying 'n'
    vector<vector<int>> ara(n + 1, vector<int>(n + 1, 0));

    char c;
    int bin;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> c;
            if(c == '*') bin = 1;
            else bin = 0;
            ara[i][j] = bin;
        }
    }

    // 2D Prefix Sum Building
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            ara[i][j] = ara[i][j] + ara[i][j-1] + ara[i-1][j] - ara[i-1][j-1];
        }
    }

    int y1, x1, y2, x2;
    int low_row, high_row, low_column, high_column;

    for(int i = 0; i < q; i++){
        // Fix 2: Read y1 (row1), x1 (col1), y2 (row2), x2 (col2)
        cin >> y1 >> x1 >> y2 >> x2;

        if(y1 > y2){
            high_row = y1;
            low_row = y2;
        } else {
            high_row = y2;
            low_row = y1;
        }

        if(x1 > x2){
            high_column = x1;
            low_column = x2;
        } else {
            high_column = x2;
            low_column = x1;
        }

        int corner = ara[low_row - 1][low_column - 1];
        int up_nega = ara[low_row - 1][high_column];
        int side_nega = ara[high_row][low_column - 1];

        int ans = ara[high_row][high_column] - up_nega - side_nega + corner;
        cout << ans << endl;
    }

    return 0;
}