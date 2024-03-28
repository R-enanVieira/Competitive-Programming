#include <bits/stdc++.h>

#include <vector>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

// vector<ii> dir = {ii(0, -1), ii(0, 1), ii(-1, 0), ii(1, 0)};
map<char, ii> dir_keys = {
    {'L', ii(0, -1)}, {'R', ii(0, 1)}, {'U', ii(-1, 0)}, {'D', ii(1, 0)}};

bool path(vector<string> &m, int i, int j, string &t) {
  ii coord = make_pair(i, j);

  for (auto x : t) {
    coord.first += dir_keys[x].first;
    coord.second += dir_keys[x].second;
    if (m[coord.first][coord.second] == '#') return false;
  }
  return true;
}

void solve(int h, int w, int n) {
  vector<string> m(h);
  string t;
  cin >> t;
  int count = 0;

  for (int i = 0; i < h; i++) {
    cin >> m[i];
  }

  for (int i = 1; i < h - 1; i++)
    for (int j = 1; j < w - 1; j++)
      if (m[i][j] == '.') count += (path(m, i, j, t) ? 1 : 0);

  cout << count << ln;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int h, w, n;
  cin >> h >> w >> n;
  solve(h, w, n);

  return 0;
}
