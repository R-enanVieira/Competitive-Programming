#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

bool dfs(vector<int> adj[], vector<bool> &visited, int u, int p = -1) {
  if (visited[u]) return false;

  visited[u] = true;

  for (auto v : adj[u]) {
    if (visited[v] and v != p) return true;

    if (dfs(adj, visited, v, u)) return true;
  }

  return false;
}

bool has_cycle(vector<int> adj[], vector<bool> visited, int N) {
  for (int u = 1; u <= N; u++)
    if (not visited[u] and dfs(adj, visited, u)) return true;

  return false;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  map<int, int> p;
  vector<int> adj[n + 1];
  vector<bool> visited(n + 1, false);

  for (int i = 0; i < m; i++) {
    int x, y;
    p[x]++;
    p[y]++;
    if (p[x] > 2 or p[y] > 2) cout << "No\n";

    adj[x].pb(y);
    adj[y].pb(x);
  }
  cout << (has_cycle(adj, visited, n) == true ? "No\n" : "Yes\n");

  return 0;
}
