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

int binarySearch(vector<int> &v, int l, int r, int x) {
  while (r > l + 1) {
    int mid = (l + r) / 2;
    if (v[mid] <= x)
      l = mid;
    else
      r = mid;
  }
  return l + 1;
}

void solve(int n, int m) {
  vi a(n), b(m);

  for (auto &x : a) cin >> x;
  for (auto &x : b) cin >> x;

  sort(a.begin(), a.end());

  for (auto y : b) {
    cout << binarySearch(a, -1, n, y) << " ";
  }
  cout << ln;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  solve(n, m);

  return 0;
}
