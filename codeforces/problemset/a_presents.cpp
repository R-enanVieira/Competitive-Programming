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
  int ans[n+1];
  for (int i = 1; i <= n; i++) {
    int input; cin >> input;
    ans[input] = i;
  }
  for (int i = 1; i <= n; i++) {
    cout << ans[i];
    if(i<n) cout << " ";
    else cout << ln;
  }

  return 0;
}

