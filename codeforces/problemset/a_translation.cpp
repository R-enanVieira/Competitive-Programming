#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string x, y; cin >> x >> y;
  int j = y.size()-1;
  bool ans = 1;
  if(x.size()!= y.size()) {cout << "NO" << ln; return 0;}
  for (int i = 0; i < x.size(); i++) {
    ans &= x[i] == y[j--];
  }
  cout << (ans ? "YES\n" : "NO\n");

  return 0;
}

