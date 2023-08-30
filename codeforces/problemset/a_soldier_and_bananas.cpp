#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll k, n, w, custo = 0; cin >> k >> n >> w;
  for (int i = 1; i <= w; i++) {
    custo += i*k;
  }
  cout << ((custo <= n) ? 0 : custo-n);
  cout << ln;

  return 0;
}


