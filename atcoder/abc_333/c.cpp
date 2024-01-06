#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

vector<ll> a = {1,         11,         111,         1111,
                11111,     111111,     1111111,     11111111,
                111111111, 1111111111, 11111111111, 111111111111};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;

  set<ll> ans;
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      for (int k = 0; k < 12; k++) {
        ans.insert(a[i] + a[j] + a[k]);
      }
    }
  }

  int cont = 0;
  for (ll x : ans) {
    if (cont++ == n - 1) cout << x << ln;
  }

  return 0;
}
