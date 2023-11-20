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
  
  ll a, b, ans; cin >> a >> b;
  ll aux1=a, aux2=b;
  for (int i = 1; i < b; i++) {
    aux1 *= a;
  }
  for (int i = 1; i < a; i++) {
    aux2 *= b;
  }
  ans = aux1 + aux2;
  cout << ans << ln;
  return 0;
}

