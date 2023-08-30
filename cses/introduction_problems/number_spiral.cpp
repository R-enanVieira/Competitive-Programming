#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--) {
    ll x, y;
    cin >> x >> y;
    ll z = max(x, y), ans;
    if(z%2) {
      if(x==1) {cout << z*z << "\n";}
      else if(y < z) {
        cout << (z*z)-(x-1)-(z-y) << "\n";
      } else if(y == z){ 
        cout << (z*z)-(x-1) << "\n";
      }
    } else 
      if(y==1) {cout << z*z << "\n";}
      else if(x < z) {
        cout << (z*z)-(y-1)-(z-x) << "\n";
      } else if(x == z){ 
        cout << (z*z)-(y-1) << "\n";
      }
  }

  return 0;
}

