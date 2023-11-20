#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  set<char> count;

  cin.ignore();
  getline(cin, s);

  for(int i = 0; i < s.size(); i++) {
   if(s[i] != ' ' && s[i] != ',' && s[i] != '{' && s[i] != '}') count.insert(s[i]);
  }

  cout << count.size() << ln;

  return 0;
}

