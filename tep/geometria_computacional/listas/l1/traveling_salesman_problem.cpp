#include <bits/stdc++.h>

#include <algorithm>
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
    int n;
    cin >> n;
    int maxX = 0, minX = 0, maxY = 0, minY = 0;
    for (int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;

      if (a != 0) {
        maxX = max(maxX, a);
        minX = min(minX, a);
      }
      if (b != 0) {
        maxY = max(maxY, b);
        minY = min(minY, b);
      }
    }
    cout << 2 * (maxX + maxY - minX - minY) << ln;
  }
  return 0;
}
