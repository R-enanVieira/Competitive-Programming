#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

vi adj[300010];

int bfs(int s, int N) {
  vector<bool> visited(N + 1, false);
  queue<int> q;
  int cont = 1;

  visited[1] = true;
  visited[s] = true;
  q.push(s);

  while (!q.empty()) {
    auto u = q.front();
    q.pop();
    cont++;

    for (auto v : adj[u]) {
      if (!visited[v]) {
        visited[v] = true;
        q.push(v);
      }
    }
  }
  return cont;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  for (int i = 0; i < n - 1; i++) {
    int v, w;
    cin >> v >> w;
    adj[v].emplace_back(w);
    adj[w].emplace_back(v);
  }

  if (adj[1].size() == 1) {
    cout << 1 << ln;
    return 0;
  }

  vi sizes;
  int maior = 0, temp = 0, ans = 0;

  for (auto x : adj[1]) {
    int st_size = bfs(x, n);
    sizes.pb(st_size);

    ans += st_size;
    maior = (sizes[maior] > sizes[temp] ? maior : temp);
    temp++;
  }

  cout << ans - sizes[maior] - (temp - 2) << ln;
  return 0;
}
