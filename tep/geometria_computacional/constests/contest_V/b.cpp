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

  map<string, int> candidates;
  pair<string, int> ans = {"", 0};

  while (n--) {
    string s;
    cin >> s;

    candidates[s]++;

    if (candidates[s] > ans.second) {
      ans.first = s;
      ans.second = candidates[s];
    }
  }

  cout << ans.first << ln;

  return 0;
}
