#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, i, j, contup = 0, contdown =0;

  cin >> n;
  if(n < 3) {
    cout << 0 << endl;
    return 0;
  } else {
    for(i = n; i%5 != 0; i++) contup++;
    for(j = n; j%5 != 0; j--) contdown++;
    if(abs(n-i) < abs(n-j)) cout << i << endl;
    else cout << j << endl;
  }

  return 0;
}
