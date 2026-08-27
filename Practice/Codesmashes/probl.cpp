#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'
 
const int MOD = 1e9 + 7;
const ll INF = 1e18;
 
void solve() {
    // write solution here
    
}
 


ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
 
// Iterative version
ll gcdIter(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
 
// Built-in (GCC/GNU C++)
// __gcd(a, b)
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;   // divide first to avoid overflow
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
