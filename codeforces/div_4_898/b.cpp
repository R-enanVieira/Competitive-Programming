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
    vi v(n);
    ll p = 1;
    for (int i = 0; i < n; i++) {
      if(i == n-1) {
        cin >> v[i];
  //      p *= v[i]++;
      } else {
        cin >> v[i];
  //      p *= v[i];
      }
    }
    auto it = min_element(v.begin(), v.end());
    *it = *it+1;
    for (int i = 0; i < n; i++) {
      p*=v[i];
    }
    cout << p << ln;
  }

  return 0;
}

