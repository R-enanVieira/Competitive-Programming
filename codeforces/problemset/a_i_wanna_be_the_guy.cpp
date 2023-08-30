#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  set<int> l;
  for (int i = 0; i < 2; i++) {
    int p; cin >> p;
    for (int i = 0; i < p; i++) {
      int input; cin >> input;
      l.insert(input);
    }
  }
  cout << ((l.size() == n) ? "I become the guy." : "Oh, my keyboard!");
  cout << ln;
  return 0;
}

