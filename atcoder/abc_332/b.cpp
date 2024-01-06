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

  int k, g, m;
  cin >> k >> g >> m;

  int copo = 0, caneca = 0;

  while (1) {
    if (!k) break;
    if (copo == g)
      copo = 0, k--;
    else if (caneca == 0)
      caneca = m, k--;
    else if (caneca >= g)
      caneca -= (g - copo), copo += (g - copo), k--;
    else
      copo += caneca, caneca = 0, k--;
  }
  cout << copo << " " << caneca << ln;
  return 0;
}
