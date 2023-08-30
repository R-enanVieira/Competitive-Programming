#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  set<char> name;
  string s; cin >> s;
  for (int i = 0; i < s.size(); i++) {
    name.insert(s[i]);
  }
  cout << (name.size()%2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
  cout << ln;

  return 0;
}

