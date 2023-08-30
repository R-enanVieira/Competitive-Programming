#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  string a = "I hate", b = "I love";
  for (int i = 1; i <= n; i++) {
    if(i == n){
      if(i%2) cout << a << " it" << ln;
      else cout << b << " it" << ln;
    } else {
      if(i%2) cout << a << " that ";
      else cout << b << " that ";
    }
  }

  return 0;
}

