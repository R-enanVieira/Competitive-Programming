#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<int, int>;

#define ln "\n"
#define pb push_back

vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};

int main() {
  int n;
  cin >> n;
  cin.ignore();
  vector<string> m;

  for (int i = 0; i <= n; i++) {
    string s;
    getline(cin, s);
    m.pb(s);
  }
  for (auto s : m) {
    int i = 0;
    for (auto c : s) {
      cout << c;
      if (c != ' ') {
        cout << vowels[i % 5];
        i = i + 1;
      }
    }
    cout << ln;
  }

  return 0;
}
