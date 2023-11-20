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
  ll n; cin >> n;
  int ans_x = 0, ans_y = 0;
  
  while(n > 1) {
    if(!(n%2)) {n /= 2; ans_x++;}
    else if(!(n%3)) {n /= 3; ans_y++;}
    else {cout << "No" << ln; return 0;}
  }
  cout << "Yes" << ln;
  return 0;
}

