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
  ll ans = 0;

  for (int i = 1; i <= (n < 100 ? n : 99); i++) {
    if (i < 10)
      ans += i;
    else
      ans += i / 10 + i % 10;
  }
  int cem = ans;
  if (n < 1000)
    for (int i = 1; i <= n / 100; i++) ans += (100 * i) + cem;

  cem = ans;
  if (n < 10000)
    for (int i = 1; i <= n / 1000; i++) ans += (n % 1000 * i) + cem;

  if (n < 1000)
    for (int i = 1; i <= n / 100; i++) ans += (100 * i) + cem;
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
