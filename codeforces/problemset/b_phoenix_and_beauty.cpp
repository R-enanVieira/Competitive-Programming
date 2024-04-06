#include <bits/stdc++.h>

#include <numeric>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

void solve() {
  int n, k;
  cin >> n >> k;
  vi a(n);
  set<int> d;

  for (auto& x : a) {
    cin >> x;
    d.insert(x);
  };

  int total_sum = 0;
  int avg = 0;
  int cont = 0;

  for (int i = 0; i <= n - k; i++) {
    int sum = 0;
    cont++;
    auto first = a.begin() + i;
    sum = accumulate(first, first + k, 0ll);
    total_sum += sum;
    cout << sum << ln;
  }
  avg = total_sum / cont;
  cout << "soma total: " << total_sum << " media: " << avg << ln;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) solve();

  return 0;
}
