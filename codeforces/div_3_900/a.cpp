#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n, k; cin >> n >> k;
    vi v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    cout << (find(v.begin(), v.end(), k) != v.end() ? "YES" : "NO");
    cout << ln;
  }

  return 0;
}

