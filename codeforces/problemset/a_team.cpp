#include <bits/stdc++.h>
using namespace std;

int main() {
  int w, ans = 0, sum = 0;
  cin >> w;
  int mat[w][3];
  for(int i = 0; i<w; i++){
    for(int j = 0; j < 3; j++){
      cin >> mat[i][j];
      sum += mat[i][j];
    }
    if(sum >= 2) ans++;
    sum = 0;
  }
  cout << ans << endl;
  return 0;
}
