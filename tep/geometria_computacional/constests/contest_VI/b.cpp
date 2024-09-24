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

  string s, t;
  cin >> s >> t;

  if (s == t or s.size() == 1) return cout << "Yes\n", 0;

  int j;
  int cmp = int(s[0]);

  for (j = 1; j < 27; j++) {
    cout << cmp + j << ln;
    if ((cmp + j) > 122) {
      cmp = (int)'a';
      if ((char)cmp == t[0]) break;
    } else if ((char)(cmp + j) == t[0])
      break;
  }

  for (int i = 0; s[i] != '\0'; i++) {
    if ((s[i] + j) > 122) {
      cmp = (int)'a' + ((s[i] + j) - 123);

      if (cmp != t[i]) return cout << "No\n", 0;
    } else if ((char)(s[i] + j) != t[i])
      return cout << "No\n", 0;
  }
  cout << "Yes\n";
  return 0;
}
