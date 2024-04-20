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

  int n, q;
  cin >> n >> q;
  vi t(n + 1, 1);

  int ans = n;

  for (int i = 0; i < q; i++) {
    int T;
    cin >> T;
    if (t[T])
      t[T]--, ans--;
    else
      t[T]++, ans++;
  }

  cout << ans << ln;
  return 0;
}
