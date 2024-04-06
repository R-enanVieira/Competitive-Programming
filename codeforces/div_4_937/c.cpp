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
  string s;
  cin >> s;
  int hora = (s[0] - '0') * 10 + s[1] - '0';
  string min = s.substr(2, 3);
  if (hora == 0)
    cout << "12" << min << " AM" << ln;
  else if (hora < 10)
    cout << "0" << hora << min << " AM" << ln;
  else if (hora < 12)
    cout << hora << min << " AM" << ln;
  else if (hora == 12)
    cout << hora << min << " PM" << ln;
  else if (hora % 12 < 10)
    cout << "0" << hora % 12 << min << " PM" << ln;
  else
    cout << hora % 12 << min << " PM" << ln;
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
