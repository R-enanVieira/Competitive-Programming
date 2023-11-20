#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; 

  string s; cin >> s;
  int ans = -1;

  for (int i = 0; s[i] != '\0'; i++) {
    if(s[i] == 'A' && i+2 <= n-1) {
      if(s[i+1] == 'B') {
        if(s[i+2] == 'C') {
          ans = i+1; break;
        }
      }
    }
  }

  cout << ans << ln;

  return 0;
}

