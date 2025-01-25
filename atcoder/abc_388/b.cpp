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

  int n, d;
  cin >> n >> d;
  vector<ii> tl(n);

  for (auto &[x, y] : tl)
    cin >> x >> y;

  for (int i = 1; i <= d; i++) {
    vi h;
    int j = 0;

    for (auto [x, y] : tl)
      h.pb(x * (y + i));

    cout << *max_element(h.begin(), h.end()) << ln;
  }

  return 0;
}
