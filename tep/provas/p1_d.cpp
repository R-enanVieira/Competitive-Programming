#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<int, int>;

#define ln "\n"
#define pb push_back

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  if (s.size() == 2)
    return cout << (s[0] == s[1] ? "Sim\n" : "Nao\n"), 0;

  map<char, int> hist;
  set<char> letters;
  set<char>::iterator itr;

  for (auto c : s) {
    hist[c]++;
    letters.insert(c);
  }

  int last, dif = 0, size = s.size();

  for (auto [v, w] : hist)
    cout << v << ": " << w << ln;

  for (itr = letters.begin(); itr != letters.end(); itr++) {
    if (itr == letters.begin())
      last = hist[*itr];
    else if (last != hist[*itr])
      last = hist[*itr], dif++;
    cout << "-----------------------------------\n";
    cout << "char: " << *itr << ln;
    cout << "last: " << last << ln;
    cout << "diff: " << dif << ln;
    cout << "-----------------------------------\n";
  }

  if (size & 1)
    cout << (dif == 1 or letters.size() == 1 ? "Sim\n" : "Nao\n");
  else
    cout << (dif > 0 ? "Nao\n" : "Sim\n");
  return 0;
}
