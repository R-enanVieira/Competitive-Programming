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

  int t; cin >> t;
  while(t--) {
    vector<string> m(11);
    int ans = 0;
    for (int i = 1; i <= 10; i++) {
      cin >> m[i];
    }
    
    for (int i = 1; i < 11; i++) {
      for (int j = 0; j < 10; j++) {
        //cout << m[i][j] << " ";
        if((i == 1 || i == 10 || j == 1-1 || j == 10-1) && m[i][j] == 'X') ans += 1;
        else if((i == 2 || i == 9 || j == 2-1 || j == 9-1) && m[i][j] == 'X') ans += 2;
        else if((i == 3 || i == 8 || j == 3-1 || j == 8-1) && m[i][j] == 'X') ans += 3;
        else if((i == 4 || i == 7 || j == 4-1 || j == 7-1) && m[i][j] == 'X') ans += 4;
        else if((i == 5 || i == 6 || j == 5-1 || j == 6-1) && m[i][j] == 'X') ans += 5;
      }
      //cout << ln;
    }
    cout << ans << ln;
  }

  return 0;
}

