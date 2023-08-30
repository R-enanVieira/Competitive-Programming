#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, ans = 1; cin >> n;
  int previous; cin >> previous;
  for (int i = 0; i < n-1; i++) {
    int input; cin >> input;
    if(input != previous) {ans++; previous = input;}
  }
  cout << ans << ln;

  return 0;
}

