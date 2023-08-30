#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, a, b, total, ans; cin >> n;
  cin >> a >> b;  n-=2;
  total = b;
  ans = total;
  while (n--) {
    cin >> a >> b;
    total -= a; total += b;
    if(ans < total) ans = total;
  }
  cin >> a >> b;
  total -= a; total += b;
  if(ans<total) ans = total;
  cout << ans << ln;
  return 0;
}

