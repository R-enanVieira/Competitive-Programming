#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  set<int> a;
  for (int i = 0; i < n; i++) {
    int input; cin >> input;
    a.insert(input);
  }
  int ans = 0;
  for (int i = 1; i <= k; i++) {
    if(!a.count(i) && i != k) {
      if(a.count(i+1))ans++;
    } else if(i == k) {
      if(!a.count(i)) ans++;
    }
  }
  cout << ans << ln;

  return 0;
}

