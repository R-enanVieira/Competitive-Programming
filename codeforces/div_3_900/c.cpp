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
    ll n, k, x; cin >> n >> k >> x;
    if((n/2)*(n+1) < x) {
      cout << "NO" << ln;
      //return 0;
    }
    ll sum = 0;
    while(k) {
      if(sum+n <= x) {sum+=n; k--;}
      n--;
      if(sum == x) break;
    }
    cout << "k: " << k << " sum: " << sum << " x: " << x << ln;

  }

  return 0;
}

