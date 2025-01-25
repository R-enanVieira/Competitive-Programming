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
  int count = 0;
  vi a(5);

  for (auto &x : a)
    cin >> x;
  for (int i = 0; i < 4; i++) {
    if (a[i] > a[i + 1]) {
      int tmp = a[i + 1];
      a[i + 1] = a[i];
      a[i] = tmp;
      count++;
    }
  }

  cout << (count == 1 ? "Yes\n" : "No\n");
  return 0;
}
