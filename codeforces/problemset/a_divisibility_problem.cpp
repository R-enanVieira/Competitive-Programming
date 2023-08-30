#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int a, b; cin >> a >> b;
    if(a<b) {cout << b-a << ln;}
    else if(a%b) {
      int q = a/b; q++;
      cout << (q*b)-a << ln;
    } else {
      cout << 0 << ln;
    }
  }
  return 0;
}

