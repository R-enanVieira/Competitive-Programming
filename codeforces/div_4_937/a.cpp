#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

void solve() {
  int a, b, c;
  cin >> a >> b >> c;

  if (a < b && b < c)
    cout << "STAIR" << ln;
  else if (a < b && c < b)
    cout << "PEAK" << ln;
  else
    cout << "NONE" << ln;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
