#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

bool isDivisible(int num, int sum) {
    return num % sum == 0;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    vi s;
    s.push_back(3);

    for (int i = 1; i < n; ++i) {
        int nm = s[i-1] + 1;
        while (isDivisible(nm, s[i-1] + s[i-2])) {
            nm++;
        }
        s.push_back(nm);
    }

    for(auto x : s) cout << x << " ";
    cout << ln;
  }

  return 0;
}

