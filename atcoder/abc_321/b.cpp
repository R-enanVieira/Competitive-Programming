#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, x; cin >> n >> x;
  vi s(n-1);
  int sum1 = 0, sum2 = 0, sum3 = 0;
  
  for (int i = 0; i < n-1; i++) {
    cin >> s[i];
  }

  sort(s.begin(), s.end());
  // sum of 0 to n-1;
  // sum of 1 to n;           40 50 60 80
  // sum of 1 to n-1;
  
  for (int i = 0; i < n-1; i++) {
    if(i == 0) {sum1 += s[i];}
    else if(i == n-2) {sum2 += s[i];}
    else {sum1 += s[i]; sum2 += s[i]; sum3 += s[i];}
  }
  
  if(sum1 >= x) {cout << 0 << ln;}
  else if(sum2 == x) {cout << *s.end() << ln;}
  else if(x-sum3 > 100) {cout << -1 << ln;}
  else if(x-sum3 >= 0){cout << x-sum3 << ln;}
  else cout << 0 << ln;

  return 0;
}

