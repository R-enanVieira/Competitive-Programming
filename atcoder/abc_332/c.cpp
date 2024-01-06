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

  int n, m;
  cin >> n >> m;
  string s;
  cin >> s;

  int ans = 0, i = 1;
  size_t it = s.find('0');
  if (it == string::npos) {
    int p = count(s.begin(), s.end(), '1');
    int l = count(s.begin(), s.end(), '2');

    int sum = (p > 0 ? abs(p - m) : 0) + l;

    cout << sum << ln;

    return 0;
  }

  size_t ant = 0;
  while (it != string::npos) {
    int p = count(s.begin() + ant, s.begin() + it, '1');
    int l = count(s.begin() + ant, s.begin() + it, '2');

    int sum = (p > 0 ? abs(p - m) : 0) + l;

    ans = max(ans, sum);

    if (it == s.size() - 1) break;
    ant = it;
    it = (s.find('0', ant + i++) == string::npos ? s.size() - 1
                                                 : s.find('0', ant + i++));
  }

  cout << ans << ln;

  return 0;
}
