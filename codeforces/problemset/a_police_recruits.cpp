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

  int n;
  cin >> n;

  int ans = 0, cont = 0;

  while (n--) {
    int input;
    cin >> input;
    if (input > 0)
      cont += input;
    else if (cont > 0)
      cont--;
    else
      ans++;
  }
  cout << ans << ln;
  return 0;
}
