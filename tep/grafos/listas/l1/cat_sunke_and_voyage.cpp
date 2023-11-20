#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"
#define oo 1e9+7

vector<int> bfs(vector<int> adj[], int s, int N) {
  vector<int> dist(N+1, oo);
  queue<int> q;

  dist[s] = 0; q.push(s);
  while(not q.empty()) {
    auto u = q.front(); q.pop();

    //visita/processa u 
    for(auto v : adj[u]) {
      if(dist[v] == oo){
        dist[v] = dist[u] + 1; q.push(v);
      }
    }
  } 
  return dist;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; // n é os vertices e m as arestas
  vector<int> g[n+1]; 
  for (int i = 0; i < m; i++) {
    int a, b; cin >> a >> b;
    g[a].push_back(b);
  }
  auto dist = bfs(g, 1, n);

  if(dist[n] == 2) cout << "POSSIBLE" << ln;
  else cout << "IMPOSSIBLE" << ln;

  return 0;
}

