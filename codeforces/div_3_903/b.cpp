#include <bits/stdc++.h>
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
  int t; cin >> t;
  while(t--) {
    int a,b,c; cin >> a >> b >> c;
    if(a == b && b == c) {cout << "YES" << ln; continue;}
    int x = min(a,b);
    x = min(x, c);
    int y = max(a,b);
    y = max(y, c);
    //cout << "x: " << x << ln;
    //cout << "y: " << y << ln;
    if(!(a%x) && (a/x <= 4)) 
      if(!(b%x) && (b/x <= 4)) 
        if(!(c%x) && (c/x <= 4)) 
          {cout << "YES" << ln; continue;}
    cout << "NO" << ln;
  }

  return 0;
}

