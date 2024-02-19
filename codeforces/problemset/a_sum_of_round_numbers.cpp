#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

vi r = {10000, 1000, 100, 10};

void solve(int n) {
  vi ans;
  for (int x : r) {
    if (n >= x) ans.pb((n / x) * x), n = n % x;
  }
  if (n > 0) ans.pb(n);
  cout << ans.size() << ln;
  for (int y : ans) cout << y << " ";
  cout << ln;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    solve(n);
  }

  return 0;
}
