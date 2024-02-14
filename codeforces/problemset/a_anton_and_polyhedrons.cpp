#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

map<string, int> polyhedrons = {{"Tetrahedron", 4},
                                {"Cube", 6},
                                {"Octahedron", 8},
                                {"Dodecahedron", 12},
                                {"Icosahedron", 20}};

void solve(int n) {
  int ans = 0;
  while (n--) {
    string s;
    cin >> s;
    ans += polyhedrons[s];
  }
  cout << ans << ln;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  solve(n);

  return 0;
}
