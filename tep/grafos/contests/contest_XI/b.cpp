#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  string s;
  cin >> s;

  int cnt = 0, m = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'A')
      if (i + 1 < n && s[i + 1] == 'B')
        if (i + 2 < n && s[i + 2] == 'C') cnt++;
  }

  cout << cnt;
  cout << ln;

  return 0;
}
