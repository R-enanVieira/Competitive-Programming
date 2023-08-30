#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679\0";
  int n; cin >> n;
  for (int i = 0; i < n+2; i++) {
    cout << pi[i];
  }
  cout << ln;

  return 0;
}

