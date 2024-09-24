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

  int a, b;
  cin >> a >> b;

  int ms = a + b;

  vector<ii> ic = {
      {15, 8},
      {10, 3},
      {3, 0},
  };

  int i = 1;

  for (auto [x, y] : ic) {
    if (ms >= x and b >= y) {
      cout << i << ln;
      return 0;
    }
    i++;
  }
  cout << 4 << ln;
  return 0;
}
