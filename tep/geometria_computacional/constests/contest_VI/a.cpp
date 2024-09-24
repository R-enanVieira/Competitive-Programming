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

  auto it = s.find('x');
  auto a = s.substr(0, it);
  auto b = s.substr(it + 1, s.size() - it);
  cout << stoi(a) * stoi(b) << ln;

  return 0;
}
