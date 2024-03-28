#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

void solve(int t) {
  vi s(t);
  multiset<int, greater<int>> so;

  for (int i = 0; i < t; i++) {
    cin >> s[i];
    so.insert(s[i]);
  }

  for (int i = 0; i < t; i++) {
    int j = 0;
    for (auto x : so) {
      if (x != s[i]) {
        cout << s[i] - x;
        break;
      }
      if (j) {
        cout << s[i] - x;
        break;
      }
      j++;
    }
    if (i == t - 1)
      cout << ln;
    else
      cout << " ";
  }

  // for (auto x : so) cout << x << " ";
  // cout << ln;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  while (n--) {
    int t;
    cin >> t;
    solve(t);
  }

  return 0;
}
