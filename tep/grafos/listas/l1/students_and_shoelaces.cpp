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

  vector<vector<int>> g(n+1, vector<int>(n+1,0)); 
  int sum=0, ans=0;

  for (int i = 0; i < m; i++) {
    int a, b; cin >> a >> b;
    g[a][b]++;
    g[b][a]++;
  }
  bool flag = 1;
  int cont = 3;
  while(cont--) {
    flag = 0;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        sum += g[i][j];
      }
      g[i][0] = sum;
      sum = 0;
    }

    for (int i = 1; i < n; i++) {
      if(g[i][0] != 1 && != 0) flag = 1;
    }
    
    for (int i = 1; i <= n; i++) {
      for (int j = 0; j <= n; j++) {
        cout << g[i][j] << " ";
      }
      cout << ln;
    }

    cout << ln;

    for (int i = 1; i <= n; i++) {
      if(g[i][0] == 1) {
        for (int j = 1; j <= n; j++) {
          if(g[i][j] && g[j][i]) g[j][i]--;
        }
      }
    }

    for (int i = 1; i <= n; i++) {
      for (int j = 0; j <= n; j++) {
        cout << g[i][j] << " ";
      }
      cout << ln;
    }
    cout << ln;
    ans++;
  }
  cout << ans << ln;

  return 0;
}

