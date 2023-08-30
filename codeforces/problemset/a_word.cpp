#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int u = 0, l = 0;
  string s; cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if(s[i] >= 'a') l++;
    else u++;
  }
  for (int i = 0; i < s.size(); i++) {
    if(u > l) s[i]=toupper(s[i]);
    else s[i]=tolower(s[i]);
  }
  cout << s << ln;
  return 0;
}

