#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;
const double EPS{1e-9};

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

bool equals(long double a, long double b) { return fabs(a - b) < EPS; }
void print(vector<int> &v) {
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << ln;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, Q, ans = 0;
  cin >> N >> Q;
  vi pc(N + 1, 1);
  vi wp(N + 1);

  for (int i = 1; i <= N; i++)
    wp[i] = i;

  while (Q--) {
    int q;
    bool ok;
    cin >> q;
    if (q == 1) {
      int p, h;
      cin >> p >> h;
      pc[wp[p]]--;
      pc[h]++;
      ans +=
          ((pc[wp[p]] == 1 and pc[h] == 1 or pc[wp[p]] == 1 and pc[h] > 2)
               ? -1
               : (pc[h] > 2 or pc[h] < 2 or pc[h] == 2 and pc[wp[p]] == 1 ? 0
                                                                          : 1));
      wp[p] = h;
    } else {
      cout << ans << ln;
    }
  }

  return 0;
}
