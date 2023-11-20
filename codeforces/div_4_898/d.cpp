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
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int ans = 0;
    for (int i = 0; i <= n; i++) {
      if(s[i] == 'B') {
        ans++;
        for (int j = i; j < i+k; j++) {
          if(s[j] == '\0') break;
          s[j] = 'W'; 
        }
        i += k-1;
      }
    }
    cout << ans << ln;
  }

  return 0;
}

