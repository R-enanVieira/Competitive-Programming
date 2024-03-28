#include <bits/stdc++.h>

#include <iostream>
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

  string s = "wbwbwwbwbwbw";

  int w, b;
  cin >> w >> b;

  while (s.size() < 500) s += s;

  for (int i = 0; i < int(s.size()); i++) {
    string t = s.substr(i, w + b);

    if (count(t.begin(), t.end(), 'w') == w) {
      cout << "Yes\n";
      return 0;
    }
  }

  cout << "No\n";
  return 0;
}
