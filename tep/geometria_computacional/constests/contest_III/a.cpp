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

  string s1, s2;
  cin >> s1 >> s2;

  if (s1[0] == '#' and s1[1] == '.' and s2[0] == '.' and s2[0] == '.' and
      s2[1] == '#')
    cout << "No" << ln;
  else if (s1[0] == '.' and s1[1] == '#' and s2[0] == '#' and s2[1] == '.')
    cout << "No" << ln;
  else
    cout << "Yes" << ln;

  return 0;
}
