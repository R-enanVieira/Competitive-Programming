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
  int t, ans=0; cin >> t;

  while(t--) {
    int n, x; cin >> n >> x;
    vi heights(n);
    for (int i = 0; i < n; i++) {
      cin >> heights[i];
    }
    sort(heights.begin(), heights.end());
    ans = 0;
    auto it = min_element(heights.begin(), heights.end());
    while(1) {
      int quant = count(heights.begin(), heights.end(), *it);
      if(quant >= x) break;
      for (int i = 0; i < n; i++) {
        if(heights[i] == *it) {
          heights[i]++;
          x--;
        } else if(heights[i] > *it) break;
      }
      ans++;
      it = min_element(heights.begin(), heights.end());
    }
  }
  cout << ans << ln;

  return 0;
}

