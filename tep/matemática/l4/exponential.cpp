#include <bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b) {
  long long res = 1;
  while (b > 0) {
    if (b & 1) res = res * a;
    a = a * a;
    b >>= 1;
  }
  return res;
}

int x;

int main() {
  cin >> x;

  for (int i = 1; i <= 32; i++) {
    if (i < 11) {
      for (int k = 3; k < 9; k++) {
        if (binpow(i, k) > 1000) break;
        if (binpow(i, k) == x) {
          cout << binpow(i, k) << endl;
          return 0;
        }
      }
    }

    if (binpow(i, 2) > x) {
      cout << binpow(i - 1, 2) << endl;
      return 0;
    }
  }
  return 0;
}
