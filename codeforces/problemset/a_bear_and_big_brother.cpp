#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int a, b; cin >> a >> b;
  int ans=0;
  while(1) {
    if(a > b) break;
    else {
      a *= 3;
      b*=2;
    }
    ans++;
  }
  cout << ans << ln;
  return 0;
}

