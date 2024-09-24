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

  map<char, int> m;

  for (char c = 'a'; c <= 'z'; c++) m[c] = 0;

  for (auto c : s) m[c] += 1;

  vi ans(s.size() + 1, 0);

  for (auto [v, w] : m) ans[w]++;

  for (int i = 1; i <= s.size(); i++)
    if (ans[i] == 1 or ans[i] > 2) {
      cout << "No\n";
      return 0;
    }
  cout << "Yes\n";

  return 0;
}
