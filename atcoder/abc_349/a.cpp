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
  int n, sum = 0;
  cin >> n;
  for (int i = 0; i < n - 1; i++) {
    int in;
    cin >> in;
    sum += in;
  }

  cout << -sum << ln;

  return 0;
}
