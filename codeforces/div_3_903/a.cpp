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
  int t; cin >> t;

  while(t--) {
    int a, b; cin >> a >> b;
    string x, m; cin >> x >> m;
    bool flag = 0;
    if(x.find(m) != string::npos) {cout << 0 << ln; continue;}
    for (int i = 0; i < b; i++) {
      x += x;
      if(x.find(m) != string::npos) {cout << i+1 << ln; break;}
      if(i == b-1) flag = 1;
    }
    if(flag) cout << -1 << ln;
  }

  return 0;
}
