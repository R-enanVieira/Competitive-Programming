#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"
constexpr double pi = 3.141592653589793238462643383279502884L;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  double x, y, d;
  cin >> x >> y >> d;

  double h = hypot(x, y);
  double radA = (atan(y / x) < 0 ? atan(y / x) + pi : atan(y / x));
  double radT = pi * (long double)d / 180.0;

  cout << fixed << setprecision(20);

  cout << x * cos(radT) - y * sin(radT) << " " << x * sin(radT) + y * cos(radT)
       << ln;
  return 0;
}
