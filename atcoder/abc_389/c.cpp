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
  int Q;
  cin >> Q;
  queue<int> q;
  vector<ll> s_sum;
  // head of i-th snake is s_sum[i-1]
  s_sum.pb(0);
  ll i = 1, loss = 0, out = 0;

  while (Q--) {
    int t;
    cin >> t;

    if (t == 1) {
      int l;
      cin >> l;
      q.push(l);
      s_sum.pb(s_sum[i - 1] + l);
      // cout << "Query " << t << "(l = " << l << ") ----------- head:" <<
      // s_sum[i - 1] << ln;
      i++;
    } else if (t == 2) {
      loss += q.front();
      q.pop();
      out++;
      // cout << "Query " << t << " ----------- out:" << out << " -----------
      // loss:" << loss << ln;
    } else {
      int k;
      cin >> k;
      // cout << "Query " << t << "  ----------- k: " << k << ln;
      cout << s_sum[out + k - 1] - loss << ln;
    }
  }
  /*
  cout << "s_sum = [";
  for (auto x : s_sum)
    cout << x << ", ";
  cout << "]\n";
  */
  return 0;
}
