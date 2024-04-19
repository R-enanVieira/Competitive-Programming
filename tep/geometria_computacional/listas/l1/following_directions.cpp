#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

map<char, ii> dir = {
    {'L', ii(-1, 0)}, {'R', ii(1, 0)}, {'U', ii(0, 1)}, {'D', ii(0, -1)}};

void solve(string &s, int n) {
  ii a = {0, 0}, g = {1, 1};

  for (auto c : s) {
    a.first += dir[c].first;
    a.second += dir[c].second;
    if (a == g) {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    solve(s, n);
  }

  return 0;
}
