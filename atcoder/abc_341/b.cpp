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
  vector<ll> a(n);

  for (int i = 0; i < n; i++) cin >> a[i];

  for (int i = 0; i < n - 1; i++) {
    int s, t;
    cin >> s >> t;

    if (a[i] >= s) a[i + 1] += (a[i] / s) * t;
  }

  cout << a[n - 1] << ln;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  solve(n);

  return 0;
}
