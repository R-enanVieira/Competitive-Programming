#include <bits/stdc++.h>

#include <queue>
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
  vi v(n);
  map<int, int> m;
  priority_queue<ii, vector<ii>, greater<ii>> pq;

  for (int i = 0; i < n; i++) {
    cin >> v[i];
    m[v[i]] = i;
    pq.emplace(ii(v[i], i));
  }

  vector<ii> ans;
  int j = 0;

  for (auto [a, b] : m) {
    if (v[j] == a) {
      j++;
      continue;
    }

    int aux = v[j];
    v[j] = a;
    v[b] = aux;

    m[aux] = b;

    ans.pb(ii(j + 1, b + 1));
    j++;
  }

  /*while (!pq.empty()) {
    int x = pq.top().first;
    if (v[j] == x) {
      pq.pop();
      j++;
      continue;
    }

    ans.pb(ii(j + 1, pq.top().second + 1));

    int aux = v[j];
    v[pq.top().second] = aux;
    v[j] = x;

    j++;
    pq.pop();
  }*/

  cout << ans.size() << ln;

  for (auto [v, w] : ans) cout << v << " " << w << ln;

  return 0;
}
