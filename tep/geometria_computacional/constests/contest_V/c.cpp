#include <bits/stdc++.h>

#include <algorithm>
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

  vi h;
  int i = 0;
  while (i < n) {
    int x;
    cin >> x;
    h.pb(x);
    i++;
  }
  sort(h.begin(), h.end());
  while (q--) {
    int x;
    cin >> x;
    cout << n - (lower_bound(h.begin(), h.end(), x) - h.begin()) << ln;
  }

  return 0;
}
