#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

const int N = 1e5 + 20;
bool dp[N];

vi bd;

void fillbd() {
  bd.pb(1);
  for (int i = 0; i < bd.size(); i++) {
    if (10 * bd[i] >= N) break;
    bd.pb(10 * bd[i]);
    bd.pb(10 * bd[i] + 1);
  }
}

void solve() {
  fillbd();
  dp[1] = true;
  for (int i = 2; i < N; i++) {
    for (auto& y : bd) {
      if (i % y == 0) dp[i] |= dp[i / y];
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  solve();
  while (t--) {
    int n;
    cin >> n;
    cout << (dp[n] ? "YES\n" : "NO\n");
  }

  return 0;
}
