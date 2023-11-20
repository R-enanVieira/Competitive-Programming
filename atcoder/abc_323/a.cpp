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
  string s; cin >> s;
  bool ans = 0;
  for (int i = 1; i < s.size(); i+=2) {
    ans |= (s[i] == '0' ? false : true);
    if(ans) break;
  }
  cout << (!ans ? "Yes" : "No");
  cout << endl;

  return 0;
}

