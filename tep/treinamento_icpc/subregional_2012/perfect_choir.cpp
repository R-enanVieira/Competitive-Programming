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
  int n;
  while(cin >> n) {
    int notasm[n], sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> notasm[i];
      sum += notasm[i];
    }
    
    int media = (sum%n ? oo : sum/n);
    int ans = 1;

    if(media == oo) {
      cout << -1 << ln;
      continue;  
    } else {
      for (int i = n-1; i >= 0; i--) {
        if(notasm[i] <= media) break;
        ans += notasm[i]-media;
      }
      cout << ans << ln;
    }
  }

  return 0;
}

