#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, r, m, ans=0; cin >> n >> m >> r;
  int t[n];
  for (int i = 0; i < n; i++) {
    cin >> t[i];
  }
  int i = 0;
  while(r>0) {
    if(i == n) i = 0;
    
    r -= m; ans += t[i++];
  }

  cout << ans << ln;
  return 0;
}

