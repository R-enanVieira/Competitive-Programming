#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

vector<string> dot = {".", "#"};
vector<string> h = {"##..", "..##"};

void solve(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2 * n; j++) {
      cout << h[i % 2][j % 4];
    }
    cout << ln;
    for (int j = 0; j < 2 * n; j++) {
      cout << h[i % 2][j % 4];
    }
    cout << ln;
  }
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
