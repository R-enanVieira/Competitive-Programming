#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int k, l, m, n, d; cin >> k >> l >> m >> n >> d;
  vector<bool> ansv(d+1, 0);
  int ans=0;
  for (int i = k; i <= d; i=i+k) {
    ansv[i] = 1;
  }
  for (int i = l; i <= d; i=i+l) {
    ansv[i] = 1;
  }
  for (int i = m; i <= d; i=i+m) {
    ansv[i] = 1;
  }
  for (int i = n; i <= d; i=i+n) {
    ansv[i] = 1;
  }
  for (int i = 1; i < d+1; i++) {
    if(ansv[i]) ans++;
  }
  cout << ans << ln;
  return 0;
}

