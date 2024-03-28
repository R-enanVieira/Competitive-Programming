#include <bits/stdc++.h>

#include <algorithm>
#include <numeric>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

void solve(int n) {
  vi a(n, 0);
  int cont_1 = 0, cont_2;

  for (auto &x : a) {
    cin >> x;
    int mod = x % 3;
    cont_1 += (mod == 1 ? 1 : 0);
    cont_2 += (mod == 2 ? 1 : 0);
  }

  int sum = accumulate(a.begin(), a.end(), 0);

  if (sum % 3 == 0)
    cout << 0 << ln;
  else if (sum % 3 == 2)
    cout << 1 << ln;
  else {
    if (cont_1 > 0)
      cout << 1 << ln;
    else if (cont_2 > 0)
      cout << 2 << ln;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    solve(n);
  }

  return 0;
}
