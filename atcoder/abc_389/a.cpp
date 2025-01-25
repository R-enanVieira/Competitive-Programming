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
  string a;
  cin >> a;

  cout << stoi(a.substr(0, 1)) * stoi(a.substr(2, 1)) << ln;
  return 0;
}
