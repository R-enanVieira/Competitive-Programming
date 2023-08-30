#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, h; cin >> n >> h;
  int ans =0;
  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;
    if(input > h) ans +=2;
    else ans++;
  }

  cout << ans << ln;

  return 0;
}

