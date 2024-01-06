#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

// 65 -> A
// 69 -> E

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string a, b;
  cin >> a >> b;

  int x = abs((a[0] - '0') - (a[1] - '0'));
  int y = abs((b[0] - '0') - (b[1] - '0'));

  x = min(x, 5 - x);
  y = min(y, 5 - y);

  cout << (x == y ? "Yes\n" : "No\n");

  return 0;
}
