#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

const double EPS{1e-9};

bool isRectangle(vector<string> &m, int mi, int mj, int li, int lj) {
  // cout << "(i, j) = (" << i << ", " << j << ")\n";
  // cout << "(h, w) = (" << h << ", " << w << ")\n";
  for (int a = mi; a <= li; a++) {
    for (int b = mj; b <= lj; b++) {
      if (m[a][b] == '.')
        return false;
    }
  }
  return true;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int H, W;
  cin >> H >> W;
  vector<string> m;

  for (int i = 0; i < H; i++) {
    string s;
    cin >> s;
    m.pb(s);
  }
  int mi = oo, mj = oo, li = 0, lj = 0;

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (m[i][j] == '#') {
        mi = min(mi, i);
        mj = min(mj, j);
        li = max(li, i);
        lj = max(lj, j);
      }
    }
  }

  if (!isRectangle(m, mi, mj, li, lj))
    return cout << "No\n", 0;
  cout << "Yes\n";
  return 0;
}
