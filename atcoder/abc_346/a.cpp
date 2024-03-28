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

  int n;
  cin >> n;
  vi a(n);

  for (auto &x : a) cin >> x;

  for (int i = 0, j = 1; j < n; i++, j++) {
    cout << a[i] * a[j] << " ";
  }
  cout << ln;

  return 0;
}
