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

  vi x(1000, 0);
  vi y(1000, 0);

  int n;
  cin >> n;

  while (n--) {
    int a, b;
    cin >> a >> b;

    x[a]++;
    y[b]++;
  }

  bool ok = false;

  for (auto v : x)
    if (v >= 3) ok = true;

  for (auto v : y)
    if (v >= 3) ok = true;

  cout << (ok ? "Yes\n" : "No\n");
  return 0;
}
