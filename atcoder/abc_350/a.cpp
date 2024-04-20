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

  string s;
  cin >> s;

  int n = stoi(s.substr(3, 5));

  cout << (n == 0 or n == 316 or n > 349 ? "No\n" : "Yes\n");

  return 0;
}
