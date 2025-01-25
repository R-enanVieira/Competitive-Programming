#include <algorithm>
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

  int n;
  cin >> n;
  vi a(n);
  ll ans = 0;

  for (auto &x : a)
    cin >> x;

  for (int i = n - 1; i >= 0; i--)
    ans += upper_bound(a.begin(), a.end(), a[i] / 2) - a.begin();

  cout << ans << ln;
  return 0;
}
