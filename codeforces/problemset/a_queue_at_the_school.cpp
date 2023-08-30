#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, t; cin >> n >> t;
  string s; cin >> s;
  for (int i = 0; i < t; i++) {
    for (int j = 0; j < s.size(); j++) {
      if(j!=s.size() && s[j] == 'B' && s[j+1] == 'G'){
        s[j] = 'G';
        s[j+1] = 'B';
        j += 1;
      }
    }
  }
  cout << s << ln;

  return 0;
}

