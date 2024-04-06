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
  int n;
  cin >> n;
  vi rest;
  multiset<int> a;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a.insert(x);
  }

  int ant = -1;

  for (auto v : a) {
    if (ant != v) {
      cout << v << " ";
      ant = v;
    } else {
      rest.pb(v);
    }
  }

  for (auto v : rest) cout << v << " ";
  cout << ln;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) solve();

  return 0;
}
