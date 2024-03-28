#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

void solve(int n) {
  vi a(n, 0);
  int ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] < 0)
      ans += (-1) * a[i];
    else
      ans += a[i];
  }
  cout << ans << ln;
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
