#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

void solve(int n, int m) {
  bool flag = true;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (i & 1)
        cout << "#";
      else {
        if (flag) {
          if (j < m)
            cout << ".";
          else
            cout << "#";
        } else {
          if (j == 1)
            cout << "#";
          else
            cout << ".";
        }
      }
    }
    cout << ln;
    if (!(i & 1) && flag)
      flag = false;
    else if (!(i & 1))
      flag = true;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  solve(n, m);

  return 0;
}
