#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  vector<vector<int>> M(n, vector<int>(m, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> M[i][j];
    }
  }
  int menor = 100000;
  for (int i = 0; i < n; i++) {
    auto p = min_element(M[i].begin(), M[i].end());
    if(*p <= menor) menor = *p;
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      ans += (M[i][j] == menor ? 0 : M[i][j]-menor);
    }
  }
  cout << ans << ln;

  return 0;
}

