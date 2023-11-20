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
  int n, t; cin >> t;
  while(t--) {
    cin >> n;
    cout << (n%3 == 0 ? "Second\n" : "First\n");
  }

  return 0;
}

