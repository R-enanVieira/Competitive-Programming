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
    int n; cin >> n;
    vi a(n), ans(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if(!i && a[i] > 1) ans[i] = 1;
      else if(!i) ans[i] = a[i]+1;

      if(i > 0) {
        ans[i] = ans[i-1]+1;
        while(ans[i] == a[i]) ans[i]++;
      }
    }
    cout << ans[n-1] << ln;
  }
  // 1 300 2 40 5
  // 2 
  return 0;
}

