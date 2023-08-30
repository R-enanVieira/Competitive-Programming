#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m, quant = 0; cin >> n >> m;
  int mat[n][m];
  vector<vector<int>> ans(n, vector<int>(m,0));
  /*for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      ans[i][j] = 0;
    }
  }*/
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> mat[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) { 
      if(mat[i][j] == 1){

        if(i-1 >= 0 && j-1 >= 0) 
          if(mat[i-1][j-1] == 0) ans[i][j]++;

        if(i-1 >= 0)
          if(mat[i-1][j] == 0) ans[i][j]++;

        if(i-1 >= 0 && j+1 <= m-1)
          if(mat[i-1][j+1] == 0) ans[i][j]++;
  
        if(j-1 >= 0)
          if(mat[i][j-1] == 0) ans[i][j]++;

        if(j+1 <= m-1)
          if(mat[i][j+1] == 0) ans[i][j]++;
        
        if(i+1 <= n-1 && j-1 >= 0) 
          if(mat[i+1][j-1] == 0) ans[i][j]++;

        if(i+1 <= n-1)
          if(mat[i+1][j] == 0) ans[i][j]++;

        if(i+1 <= n-1 && j+1 <= m-1)
          if(mat[i+1][j+1] == 0) ans[i][j]++;

      } else {
        quant++;
      }
    }
  }
 
  int max;
  for (int i = 0; i < n; i++) {
    if(i > 0) {
      if(max <= *max_element(ans[i].begin(), ans[i].end())) max = *max_element(ans[i].begin(), ans[i].end());
    } else {
      max = *max_element(ans[i].begin(), ans[i].end());
    }
  }
  if(max == quant)
    cout << "WIN" << ln;
  else cout << "LOSE" << ln;
  return 0;
}

