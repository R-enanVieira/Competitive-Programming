#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;

  while(t--) {
    map<int, set<int>> s;
    set<int> u;
    int n, i = 0, ins=100; cin >> n;
    while (n--) {
      int cont = 0;
      int k; cin >> k;
      for (int j = 0; j < k; j++) {
        int input; cin >> input;
        if(!u.count(input)) cont++;
        s[i].insert(input);
        u.insert(input);
      }
      if(cont) ins = min(ins, cont);
      i++;
    }
    for (int j = 0; j < s.size(); j++) {
      for(auto k : s[i]) {

      }
    }
    cout << u.size()-ins << ln;
  }

  return 0;
}
