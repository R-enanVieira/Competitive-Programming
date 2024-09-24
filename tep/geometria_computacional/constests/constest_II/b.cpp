#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

bool is_equal(pair<int, int> x, pair<int, int> y) {
  return x.second == y.second;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<ii> a, b;
  vi s;

  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    a.pb(ii(x, i + 1));
    b.pb(ii(y, i + 1));
    s.pb(x + y);
  }
  auto it = min_element(a.begin(), a.end());

  b.erase(b.begin() + it->second - 1);
  auto it2 = min_element(b.begin(), b.end());

  cout << (max(it->first, it2->first) < *min_element(s.begin(), s.end())
               ? max(it->first, it2->first)
               : *min_element(s.begin(), s.end()));
  cout << ln;
  return 0;
}
