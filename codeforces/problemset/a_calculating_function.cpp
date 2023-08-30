#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, ans; cin >> n;
  if(n%2) {
    ans = -1*(n/2) - 1;
  } else {
    ans = n/2;
  }
  cout << ans << ln;

  return 0;
}

