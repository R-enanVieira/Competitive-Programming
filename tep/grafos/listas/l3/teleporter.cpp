#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

vi adj[200001];
bitset<200001> visited;
int e = -1;
int b = -1;

vi dis(200001, 0); 

bool dfs(int u, int p = -1) {
  if(visited[u])
    return false;

  visited[u] = true;

  for(auto v : adj[u]) {
    if(visited[v] and v != p) {
      if(e == -1) e = u, b = v;
      return true;
    }
    dis[v] = 1+dis[u];
    
    if(dfs(v, u)) {
      return true;
    }
  }

  return false;
}

bool has_cycle(int N) {
  visited.reset();
  for(int u = 1; u <= N; ++u) {
    if(not visited[u] and dfs(u))
      return true;
  }
  return false;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  ll k; cin >> k;

  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    adj[i].pb(x);
  }
  
  bool flag = has_cycle(1);

  if(k < dis[b] || k < dis[e]) {
    int x = k;
    int y = 1;
    for (int i = 0; i < x; i++) {
      y = adj[y][0];
    }
    cout << y << ln;
    return 0;
  }

  int loop_size = dis[e] - dis[b];

  ll r = (k-dis[b])%(loop_size+1);
  int aux = e;
  for(int i = 0; i < r; i++){
    aux = adj[aux][0];
  }

  if(flag) cout << adj[aux][0] << ln;
  else cout << e << ln;

  return 0;
}
