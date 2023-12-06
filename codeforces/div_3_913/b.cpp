#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

void solve() {
  string str;
  cin >> str;

  string ans;

  deque<int> m, M;
  int i = 0;

  for (char c : str) {
    if (c == 'b' && !m.empty()) {
      m.pop_back();
    } else if (c == 'B' && !M.empty()) {
      M.pop_back();
    } else if (c != 'b' && c != 'B') {
      if (c >= 'A' && c <= 'Z') {
        M.push_back(i);
      }
      if (c >= 'a' && c <= 'z') {
        m.push_back(i);
      }
    }
    i++;
  }

  int j = 0;

  while (!m.empty() || !M.empty()) {
    if (!m.empty() && m.front() == j) {
      cout << str[m.front()];
      m.pop_front();
    } else if (!M.empty() && M.front() == j) {
      cout << str[M.front()];
      M.pop_front();
    }
    j++;
  }
  cout << ln;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
