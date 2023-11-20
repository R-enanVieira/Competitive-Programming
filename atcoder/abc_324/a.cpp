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
  int n; cin >> n;
  set<int> a;
  for(int i = 0; i < n; i++) {
    int x; cin >> x;
    a.insert(x);
  }
  cout << (a.size() == 1 ? "Yes" : "No");
  cout << ln;

  return 0;
}

