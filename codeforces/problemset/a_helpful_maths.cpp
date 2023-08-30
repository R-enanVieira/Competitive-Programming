#include <bits/stdc++.h>
using namespace std;    

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  sort(s.begin(), s.end());
  if(s.size() == 1) {cout << s << ln;}
  else {
    for (int i = 0; i < s.size(); i++) {
      if(s[i] != '+' && i != s.size()-1) cout << s[i] << "+";
      else if(s[i] != '+') cout << s[i];
    }
    cout << ln;
  }
  return 0;
}

