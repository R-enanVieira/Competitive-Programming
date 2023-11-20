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
  int n, k, q; cin >> n >> k >> q;
  vi p(n+1, 0);

  for (int i = 0; i < q; i++) {
      int a; cin >> a;
      p[a]++;
    }
    for (int i = 1; i <= n; i++) {
      cout << (k+(p[i]-q) >= 1 ? "Yes" : "No");
    cout << ln;
  }
  

  return 0;
}

