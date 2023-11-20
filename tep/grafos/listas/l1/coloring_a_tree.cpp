#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

vector<int> adj[20001];
vector<int> c(20000);
ll ans = 1;

void dfs(int s){
  for(int v : adj[s]) {
    if(c[v] != c[s]) ans++;
    dfs(v);
  }
}

/*int bfs(int s, int N) {
  vector<int> dist(N+1, oo);
  queue<int> q;
  int ans = 0;
  dist[s] = 0;
  q.push(s);

  for (int i = 0; i < N; i++) {
    int n  = q.front();
    q.pop();
    for(auto v : adj[n]) {
      q.push(v);
      if(c[v] != c[n]) ans++;
    }
  }
  return ans;
}*/

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n; cin >> n;
  
  for(int i = 2; i <= n; i++) {
    int x; cin >> x;
   // adj[2+i].push_back(x);
    adj[x].push_back(i);
  }

  for (int i = 1; i <= n; i++) {
    cin >> c[i];
  }
  dfs(1);
  cout << ans << ln;

  return 0;
}

