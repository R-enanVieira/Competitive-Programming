#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

vector<int> solve(const vector<ii> &p, int n) {
  vi ans(n, oo);
  for (int i = 0; i < n; i++) {
    double maior = -oo;
    for (int j = 0; j < n; j++) {
      if (i == j)
        continue;
      else if (hypot(p[i].first - p[j].first, p[i].second - p[j].second) >
               maior) {
        maior = hypot(p[i].first - p[j].first, p[i].second - p[j].second);

        ans[i] = j + 1.;
      }
    }
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<ii> p(n);

  for (auto &[x, y] : p) cin >> x >> y;

  auto ans = solve(p, n);

  for (auto v : ans) cout << v << ln;
  return 0;
}
