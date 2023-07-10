#include <bits/stdc++.h>
using namespace std;

void ternary(long long value) {
  int mod;
  mod = value%3;
  value /= 3;
  if(value != 0) {
    ternary(value);
    cout << mod;
  }
  else {
    cout << mod;
  }
}

int main() {
  long long n;
  while(1) {
    cin >> n;
    if(n < 0) break;
    ternary(n);
    cout << endl;
  }
}
