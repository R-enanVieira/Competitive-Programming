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
  ll n;
  cin >> n;
  ll ans = 1;
  for (int i = 1; i <= 100; i++) {
    if (ans == n)
      return cout << i - 1 << ln, 0;

    ans *= i;
  }
  return 0;
}
