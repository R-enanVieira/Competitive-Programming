#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  double ans;
  for (int i = 0; i < n; i++) {
    double input; cin >> input;
    input /= 100.00;
    ans += input;
  }
  cout << fixed << setprecision(12) << (100)*(ans/(1.0*n)) << ln;

  return 0;
}

