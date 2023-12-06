#include <bits/stdc++.h>

#include <algorithm>
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
  cin >> n;
  vector<int> P(n), Q(n);
  for (auto &p : P) cin >> p;
  for (auto &q : Q) cin >> q;
  vector<int> Po = P, Qo = Q;
  sort(begin(P), end(P));
  sort(begin(Q), end(Q));
  int a = 1;
  do {
    if (P == Po) break;
    ++a;
  } while (next_permutation(begin(P), end(P)));
  int b = 1;
  do {
    if (Q == Qo) break;
    ++b;
  } while (next_permutation(begin(Q), end(Q)));
  cout << abs(a - b) << endl;

  return 0;
}
