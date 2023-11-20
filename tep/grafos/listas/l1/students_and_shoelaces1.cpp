#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  int ans=0;
  unordered_map<int,unordered_set<int>> g;

  while(m--) {
    int a, b; cin >> a >> b;
    g[a].insert(b);
    g[b].insert(a);
  }
  vector<ii> aux;
  int conexoes = 0; 
  while(1) {
    for (int i = 1; i <= n; i++) {
      if(g[i].size() == 1) aux.push_back(make_pair(*(g[i].begin()), i));
      else if(g[i].size() > 1) conexoes++;
    }
    if(!aux.size() || aux.size() == 1 && !conexoes) break;
    for (int i = 0; i < aux.size(); i++) {
      g[aux[i].first].erase(aux[i].second); 
      g[aux[i].second].erase(aux[i].first);  
    }
    aux.clear(); conexoes = 0;
    ans++;
  }

  cout << ans << ln;

  return 0;
}

