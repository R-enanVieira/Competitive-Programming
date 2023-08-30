#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, m, a; cin >> n >> m >> a;
  ll ans;
  if(n%a) n = (n/a)+1;
  else n = n/a;
  if(m%a) m = (m/a)+1;
  else m = m/a;
  cout << n*m << ln;
  return 0;
}

