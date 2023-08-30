#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  set<ll> s;
  for (int i = 0; i < 4; i++) {
    ll input; cin >> input;
    s.insert(input);
  }

  cout << 4-s.size() << ln;

  return 0;
}

