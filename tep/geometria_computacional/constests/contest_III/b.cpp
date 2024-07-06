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
  string a, b;
  cin >> a >> b;

  int i = a.size();
  int j = b.size();
  int x, y;

  for (; i >= 0 and j >= 0; i--, j--) {
    x = a[i] - '0';
    y = b[j] - '0';
    if ((x + y) > 10) {
      cout << "Hard\n";
      return 0;
    }
  }
  cout << "Easy\n";
  return 0;
}
