#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int solve(string s) {
  int ans = 0;
  for (size_t i = 0; s[i] != '\0'; i++) 
   ans += s[i] - '0'; 

  return ans;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string a, b; cin >> a >> b;
  int ans_a = solve(a);
  int ans_b = solve(b);
  cout << (ans_a >= ans_b ? ans_a : ans_b);
  cout << ln;

  return 0;
}

