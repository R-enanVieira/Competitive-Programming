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
  string s;
  cin >> s;
  for (int i = 0; s[i] != '\0'; i++) {
    if (i == s.size() - 1 && s[i] == 's')
      cout << s[i] << "es\n";
    else if (i == s.size() - 1 && s[i] != 's')
      cout << s[i] << "s\n";
    else
      cout << s[i];
  }
  return 0;
}
