#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int ans;
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
      int input;
      cin >> input;
      if(input) ans = abs(3-i) + abs(3-j);
    }
  }
  cout << ans << ln; 
  return 0;
}

