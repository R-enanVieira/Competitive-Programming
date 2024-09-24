#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<ll, ll>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

long long binpow(long long a, long long b) {
  long long res = 1;
  while (b > 0) {
    if (b & 1) res = res * a;
    a = a * a;
    b >>= 1;
  }
  return res;
}

int dec(ll l) {
  int ans = 0;
  while (l) {
    if (l % 2 == 0) ans++;
    l /= 2;
  }
  return ans;
}

void solve(ll l, ll r) {
  int i = dec(l);
  int j = l / binpow(2ll, i);
  ll new_r = binpow(2ll, i) * (j + 1);

  vector<ii> ans;
  ans.pb(ii(l, new_r));

  while (l <= r) {
    l = new_r;
    i = dec(l);
    j = l / binpow(2ll, i);

    cout << "i: " << i << "j: " << j << ln;

    new_r = binpow(2ll, i) * (j + 1);
    ans.pb(ii(l, new_r));
  }

  cout << ans.size() << ln;

  for (auto [v, w] : ans) cout << v << " " << w << ln;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll l, r;
  cin >> l >> r;

  solve(l, r);

  return 0;
}
