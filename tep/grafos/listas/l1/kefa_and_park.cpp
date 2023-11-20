#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

vector<int> adj[100000];
vector<int> c(100000);
int ans = 0;

void dfs(int s, int m, int t, int cont) {
  if(cont>m) return;
  int flag = 1; 
  for(int v : adj[s]) {
    if(v != t)
      flag = 0,
      dfs(v, m, s, cont*c[v] +c[v]);
  }
  ans += flag;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, m; cin >> n >> m; 
  
  for (int i = 1; i <= n; i++) {
    cin >> c[i];  
  }

  for (int i = 1; i < n; i++) {
    int x, y; cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }

  dfs(1, m, -1, c[1]); 
  cout << ans << ln;
  return 0;
}

