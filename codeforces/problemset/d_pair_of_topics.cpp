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

void solve(int n) {
  vector<long long int> a(n), b(n);

  for (auto& x : a) cin >> x;

  for (auto& x : b) cin >> x;

  vector<long long int> c(n);

  for (int i = 0; i < n; i++) {
    c[i] = a[i] - b[i];
  }

  sort(c.begin(), c.end());

  ll ans = 0;

  for (int i = 0; i < n; i++) {
    if (c[i] < 1) continue;
    ans += i - (lower_bound(c.begin(), c.end(), -1 * c[i] + 1) - c.begin());
  }

  cout << ans << ln;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  solve(n);

  return 0;
}
