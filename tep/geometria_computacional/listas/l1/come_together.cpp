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

  int t;
  cin >> t;

  while (t--) {
    ii a, b, c;

    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    cin >> c.first >> c.second;

    int x = 0, y = 0;

    if (a.first > b.first and a.first > c.first)
      x = a.first - max(b.first, c.first);
    if (a.first < b.first and a.first < c.first)
      x = min(b.first, c.first) - a.first;

    if (a.second > b.second and a.second > c.second)
      y = a.second - max(b.second, c.second);
    if (a.second < b.second and a.second < c.second)
      y = min(b.second, c.second) - a.second;

    cout << x + y + 1 << ln;
  }

  return 0;
}
