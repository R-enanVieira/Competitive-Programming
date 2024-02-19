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
  string s;
  cin >> s;
  int cont = 0;
  for (auto x : s) cont += (x == 'A' ? 1 : 0);
  cout << (cont > 5 - cont ? 'A' : 'B');
  cout << ln;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve(t);
  return 0;
}
