#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

vi bills = {100, 20, 10, 5, 1};

void solve(int n) {
  int ans = 0;
  for (int x : bills) {
    if (n >= x) {
      ans += n / x;
      n = n % x;
    }
    if (!n) break;
  }
  cout << ans << ln;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  solve(n);

  return 0;
}
