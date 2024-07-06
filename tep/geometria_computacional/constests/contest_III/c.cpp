#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<long long, long long>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, w;
  cin >> n >> w;
  vector<ii> cheese(n);

  for (int i = 0; i < n; i++) {
    int d, g;
    cin >> d >> g;
    cheese.pb(ii(d, g));
  }

  sort(cheese.rbegin(), cheese.rend());

  ll ans = 0;
  int index = 0;

  for (auto [d, g] : cheese) {
    if (g >= w) {
      ans += d * w;
      w = 0;

    } else {
      ans += g * d;
      w -= g;
    }

    if (w == 0) break;
  }

  cout << ans << ln;

  return 0;
}
