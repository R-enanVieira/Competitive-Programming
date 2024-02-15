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

  string a, b, c;
  cin >> a >> b >> c;

  string ans = a + b;
  if (ans.size() != c.size()) {
    cout << "NO" << ln;
    return 0;
  } else {
    sort(ans.begin(), ans.end());
    sort(c.begin(), c.end());

    for (int i = 0; i < c.size(); i++) {
      if (ans[i] != c[i]) {
        cout << "NO" << ln;
        return 0;
      }
    }
  }

  cout << "YES" << ln;

  return 0;
}
