#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  char mat[8][8];
  char c[8];
  int t, k;

  cin >> t;
  while(t--) {
    k = 0;
    for(int i = 0; i<8; i++){
      c[i] = '#';
    }

    for(int i = 0; i<8; i++){
      for(int j = 0; j<8; j++){
        cin >> mat[i][j];
        if(mat[i][j] != '.') c[k++] = mat[i][j];
      }
    }

    for(int i=0; i < 8; i++) {
      if(c[i] != '#') cout << c[i];
      else break;
    }
    cout << endl;
  }

  return 0;
}

