#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string a, b; cin >> a >> b;
  string ans = b;
  bool carry = 0;
  for (int i = a.size()-1; i >= 0; i--) {
    if(a[i] == '0' && b[i] == '0') ans[i] = '0';
    else if(a[i] == '1' && b[i] == '0') ans[i] = '1';
    else if(a[i] == '0' && b[i] == '1') ans[i] = '1';
    else ans[i] = '0';
  }
  cout << ans << ln;
  return 0;
}

