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

  int n, s, k;
  cin >> n >> s >> k;
  ll ans = 0;
  while (n--) {
    int p, q;
    cin >> p >> q;
    ans += p * q;
  }
  ans += (ans >= s ? 0 : k);
  cout << ans << ln;
  return 0;
}
