#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ii pair<int, int>
#define ln "\n"

int main() {
  string s;
  cin >> s;
  cout << (char)toupper(s[0]);
  for (auto c : s.substr(1, s.size()))
    cout << (char)tolower(c);
  cout << ln;

  return 0;
}
