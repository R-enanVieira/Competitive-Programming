#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  for (int i = 0; i < k; i++) {
    if(n%10) n -= 1;
    else n /= 10;
  }
  cout << n << ln;
  return 0;
}

