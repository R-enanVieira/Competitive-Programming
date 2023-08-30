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
  int ans=0;
  for (int i = 0; i < n; i++) {
    string s; cin >> s;
    if(s.find("++") != string::npos) ans++;
    else ans--;
  }
  cout << ans << ln;

  return 0;
}

