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
  string p;
  cin >> p;
  char c = p[0];
  int r = p[1] - '0';

  for (int i = 1; i <= 8; i++) {
    if (r != i) {
      cout << c;
      cout << i << ln;
    }
  }
  for (char x = 'a'; x < 'i'; x++) {
    if (x != c) {
      cout << x;
      cout << r << ln;
    }
  }
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
