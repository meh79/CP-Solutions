#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<vector<int>> a(n);  // n empty arrays

    for(int i = 0; i < q; i++) {
        int alpha;
        cin >> alpha;

        switch(alpha) {
            case 0: {  // pushBack
                int t, x;
                cin >> t >> x;
                a[t].emplace_back(x);
                break;
            }
            case 1: {  // dump / print
                int t;
                cin >> t;
                for(int k = 0; k < a[t].size(); k++) {
                    if(k + 1 == a[t].size()) cout << a[t][k];
                    else cout << a[t][k] << " ";
                }
                cout << endl;
                break;
            }
            case 2: {  // clear
                int t;
                cin >> t;
                a[t].clear();
                break;
            }
            default: 
                // invalid query type
                break;
        }
    }

    return 0;
}
