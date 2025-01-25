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
  vector<ll> a(n);

  for (auto &x : a)
    cin >> x;

  if (a.size() == 2)
    return cout << "Yes\n", 0;
  if (a[1] < a[0])
    reverse(a.begin(), a.end());

  for (int i = 0; i < n - 1; i++) {
    if (a[i] * a[1] != a[i + 1] * a[0]) {
      return cout << "No\n", 0;
    }
  }

  cout << "Yes\n";
  return 0;
}
