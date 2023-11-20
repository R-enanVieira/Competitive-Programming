#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  bool ans = true;
  for (int i = 1; i < s.size(); i++) {
    ans &= s[i] < s[i-1];
  }
  cout << (ans ? "Yes" : "No");
  cout << ln;
  return 0;
}

