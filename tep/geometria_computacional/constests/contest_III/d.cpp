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

  string s;
  cin >> s;
  int k;
  cin >> k;

  int aux = 0;
  for (char c : s) {
    if (c != 'X') aux++;
  }

  if (!aux) {
    cout << s.size() << ln;
    return 0;
  }

  int r = 0, l = 0, maxlen = 0, cnt = 0;

  int stam = s.size();
  while (r < stam) {
    if (s[r] != 'X') cnt++;

    while (cnt > k) {
      if (s[l] != 'X') --cnt;
      l++;
    }
    maxlen = max(maxlen, r - l + 1);
    r++;
  }

  cout << maxlen << ln;

  return 0;
}
