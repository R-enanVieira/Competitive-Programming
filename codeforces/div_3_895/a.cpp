#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;

  while(t--) {
    int a, b, c; cin >> a >> b >> c;
    int maior = max(a, b);
    int menor = min(a, b);
    if(maior == menor) {cout << 0 << ln;}
    else {
      int ans = 0;
      while(maior > menor) {
        maior -= c;
        menor += c;
        ans++;
      }
      cout << ans << ln;
    }
  }

  return 0;
}

