#include <bits/stdc++.h>
using namespace std; 

int main() {
  ios::sync_with_stdio(false);
  long long a, b, k;
  cin >> a >> b >> k;
  if(a == 0 && b == 0) {cout << 0 << " " << 0 << endl;}
  else if(a > 0) {
    a -= k;
    if(a < 0){b += a; a -= a;}
    if(b < 0) b -= b;
    cout << a << " " << b << endl;
  } else if(b > 0) {
    b -= k;
    if(b < 0) b -= b;
    cout << a << " " << b << endl;
  }
  return 0;
}
