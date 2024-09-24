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
  bool ok1 = false, ok2 = false, ok3 = false;

  for (auto c : s) {
    if (!ok1 and tolower(t[0]) == c)
      ok1 = true;
    else if (!ok2 and ok1 and tolower(t[1]) == c)
      ok2 = true;
    else if (ok1 and ok2 and tolower(t[2]) == c)
      ok3 = true;
  }

  if (ok1 and ok2 and ok3)
    cout << "Yes\n";
  else if (ok1 and ok2 and t[2] == 'X')
    cout << "Yes\n";
  else
    cout << "No\n";

  return 0;
}
