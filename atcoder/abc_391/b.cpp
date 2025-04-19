#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;
const double EPS{1e-9};

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

bool equals(long double a, long double b) { return fabs(a - b) < EPS; }

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  vector<string> S(n), T(m);

  for (auto &s : S)
    cin >> s;
  for (auto &t : T)
    cin >> t;

  bool ok;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      ok = true;
      for (int ii = 0; ii < m; ii++) {
        for (int jj = 0; jj < m; jj++) {
          if (not(i + ii < n) or not(j + jj < n) or
              S[i + ii][j + jj] != T[ii][jj])
            ok = false;
        }
      }
      if (ok)
        return cout << i + 1 << " " << j + 1 << ln, 0;
    }
  }

  return 0;
}
