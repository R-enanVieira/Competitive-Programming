#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  char mat[n][n];
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> mat[i][j];  
    }
  }
  int k; cin >> k;
  for (int l = 0; l < k; l++) {
    int x, y, z, w, ans=0; cin >> x >> y >> z >> w;
    for (int i = x; i <= z; i++) {
      for (int j = y; j <= w; j++) {
        if(mat[i][j] == 'F') ans++;
      }
    }
    cout << ans << ln;
  }
    
  return 0;
}

