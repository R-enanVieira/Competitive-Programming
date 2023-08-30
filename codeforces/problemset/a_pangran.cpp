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
  string s; cin >> s;
  set<char> a;
  for (int i = 0; i < n; i++) {
    s[i] = toupper(s[i]);
    a.insert(s[i]);
  }

  cout << ((a.size() >= 26) ? "YES" : "NO");
  cout << ln;


  return 0;
}

