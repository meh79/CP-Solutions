#include<bits/stdc++.h>
using namespace std;

const int N = 3e5 + 9; // Maximum size of the original array

int a[N]; // The original array (0-indexed or 1-indexed, depending on how you use it)

struct ST {
  int t[4 * N]; // The segment tree array (4 times the size of N)
  static const int inf = 1e9; // Infinity value used for Maximum queries
  
  // Constructor: Fills the tree array with 0s when created
  ST() {
    memset(t, 0, sizeof t);
  }
  
  // BUILD FUNCTION
  // n = current node in tree, b = begin index of range, e = end index of range
  void build(int n, int b, int e) {
    if (b == e) { // Base case: Leaf node
      t[n] = a[b];
      return;
    }
    
    // Bitwise math for speed:
    // mid = (b + e) / 2
    // l (left child) = n * 2
    // r (right child) = (n * 2) + 1
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    
    build(l, b, mid);       // Build left half
    build(r, mid + 1, e);   // Build right half
    
    t[n] = max(t[l], t[r]); // Combine: This tree finds the MAXIMUM value
  }
  
  // UPDATE FUNCTION
  // i = the exact index to update, x = the new value
  void upd(int n, int b, int e, int i, int x) {
    // RED LIGHT: If the current range [b, e] does not contain index 'i', stop.
    if (b > i || e < i) return; 
    
    // GREEN LIGHT: We found the exact leaf node for index 'i'
    if (b == e && b == i) {
      t[n] = x;
      return;
    }
    
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    
    upd(l, b, mid, i, x);     // Try updating left child
    upd(r, mid + 1, e, i, x); // Try updating right child
    
    t[n] = max(t[l], t[r]);   // Recalculate the maximum for this node
  }
  
  // QUERY FUNCTION
  // i = start of query range (L), j = end of query range (R)
  int query(int n, int b, int e, int i, int j) {
    // RED LIGHT: No overlap. Return a very small number (-inf) so it doesn't affect max()
    if (b > j || e < i) return -inf;
    
    // GREEN LIGHT: Total overlap. Return this node's value.
    if (b >= i && e <= j) return t[n];
    
    // YELLOW LIGHT: Partial overlap. Split and check both sides.
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    
    int L = query(l, b, mid, i, j);
    int R = query(r, mid + 1, e, i, j);
    
    return max(L, R); // Return the maximum of the two halves
  }
}t;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  return 0;
}