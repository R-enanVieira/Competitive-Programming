#include <bits/stdc++.h>

#include <iomanip>
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
  cout << setprecision(10);

  int loa, lab, lbc;
  cin >> loa >> lab >> lbc;

  auto pi = acos(-1.0);
  int r = loa + lab + lbc;
  auto circ_externo = pi * r * r;

  if (loa == lab && lab == lbc)
    cout << pi * r * r << ln;
  else if (loa == lab) {
    auto circ_interno =
        pi * max(0, (lbc - (lab + loa))) * max(0, (lbc - (lab + loa)));
    cout << circ_externo - circ_interno << ln;
  } else if (lab == lbc) {
    auto circ_interno =
        pi * max(0, (loa - (lab + lbc))) * max(0, (loa - (lab + lbc)));
    cout << circ_externo - circ_interno << ln;
  } else {
    vi s = {loa, lab, lbc};
    sort(s.rbegin(), s.rend());
    auto circ_interno = pi * (s[0] - (s[1] + s[2])) * (s[0] - (s[1] + s[2]));

    cout << circ_externo - circ_interno << ln;
  }
  return 0;
}
