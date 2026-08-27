#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int N, W;
    cin >> N >> W;

    // 1-based indexing makes the DP math much easier to read!
    vector<long long> weight(N + 1);
    vector<long long> value(N + 1);

    for (int i = 1; i <= N; i++) {
        cin >> weight[i] >> value[i];
    }

    // Create the 2D DP Grid: (N + 1) rows and (W + 1) columns, filled with 0s.
    // We use 'long long' because the max value can be 100 items * 10^9 = 10^11 (which breaks normal int!)
    vector<vector<long long>> dp(N + 1, vector<long long>(W + 1, 0));

    // The Bottom-Up DP Loops
    for (int i = 1; i <= N; i++) {           // Loop through each item
        for (int w = 0; w <= W; w++) {       // Loop through every bag capacity from 0 to W
            
            // The Bouncer: Does the item fit in the current bag 'w'?
            if (weight[i] <= w) {
                // IT FITS! Choose the max of:
                // 1. Leave it (Look straight up)
                // 2. Take it (Item's value + Look up and jump backwards by item's weight)
                dp[i][w] = max(dp[i - 1][w], value[i] + dp[i - 1][w - weight[i]]);
            } 
            else {
                // TOO HEAVY! We must leave it. Just copy the answer from the row above.
                dp[i][w] = dp[i - 1][w];
            }
            
        }
    }

    // The final answer is in the very last box: All N items considered, for the max W capacity!
    cout << dp[N][W] << "\n";

    return 0;
}