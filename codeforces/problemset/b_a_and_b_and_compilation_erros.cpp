#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

void solve(int n) {
  ll e, a, b, x;
  e = 0;
  a = 0;
  b = 0;
  for (int i = 1; i <= n; i++) {
    cin >> x;
    e += x;
  }

  for (int i = 1; i < n; i++) {
    cin >> x;
    a += x;
  }

  for (int i = 1; i < (n - 1); i++) {
    cin >> x;
    b += x;
  }
  cout << e - a << ln;
  cout << (e - b) - (e - a) << ln;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  solve(n);

  return 0;
}
