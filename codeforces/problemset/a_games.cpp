#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

vector<ii> colors;

void solve(int n) {
  for (int i = 0; i < n; i++) {
    int h, a;
    cin >> h >> a;
    colors.pb(make_pair(h, a));
  }

  int ans = 0;
  int cz = colors.size();
  for (int i = 0; i < cz; i++) {
    for (int j = 0; j < cz; j++) {
      if (i == j) continue;
      ans += colors[i].first == colors[j].second ? 1 : 0;
    }
  }
  cout << ans << ln;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  solve(n);

  return 0;
}
