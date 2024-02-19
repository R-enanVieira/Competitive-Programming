#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

void solve(int n) {
  vector<string> grid(n);

  for (int i = 0; i < n; i++) cin >> grid[i];

  int count_l = 0, count_c = 0;
  set<int> s;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      count_l += (grid[i][j] == '1' ? 1 : 0);
    }
    if (count_l > 0) s.insert(count_l);
    count_l = 0;
  }
  if (s.size() == 1)
    cout << "SQUARE\n";
  else
    cout << "TRIANGLE\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    solve(n);
  }

  return 0;
}
