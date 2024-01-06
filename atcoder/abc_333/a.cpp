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
  string n, ans;
  cin >> n;
  int x = n[0] - '0';
  for (int i = 0; i < x; i++) {
    ans += n;
  }
  cout << ans << ln;
  return 0;
}
