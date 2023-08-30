#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int x; cin >> x;
  if(x < 5) cout << 1 << ln;
  else if(x%5) cout << (x/5)+1 << ln;
  else cout << x/5 << ln;

  return 0;
}

