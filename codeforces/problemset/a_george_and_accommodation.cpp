#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, ans = 0; cin >> n;
  for (int i = 0; i < n; i++) {
    int q, c; cin >> q >> c;
    if(c-q > 1) ans++;
  }
  cout << ans << ln;
  return 0;
}

