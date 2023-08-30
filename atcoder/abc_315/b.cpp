#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int m; cin >> m;
  int d[m], sum = 0, a, b;
  for (int i = 0; i < m; i++) {
    cin >> d[i];
    sum += d[i];
  }
  int media = (sum+1)/2;
  sum = 0;
  for (int i = 0; i < m; i++) {
    sum += d[i];
    if(sum >= media) {b = i+1; break;}
  }
  sum -= d[b-1];
  for (int i = 1; i <= d[b-1]; i++) {
    if(sum+i == media) {a = i; break;}
  }
  cout << b << " " << a << ln;
  return 0;
}

