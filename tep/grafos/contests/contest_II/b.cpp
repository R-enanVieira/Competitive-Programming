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
  string s; cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if((i+1)%2 == 0 && (s[i] == 'R')) {
      cout << "No" << endl;
      return 0;
    }
    if((i+1)%2 && (s[i] == 'L')) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << ln;

  return 0;
}

