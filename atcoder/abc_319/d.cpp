#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  ll ans = 0;
  int words[n], sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> words[i];
    sum += words[i];
    //if(i == 0 || i == n-1) sum += words[i];
    //else sum += 1 + words[i];
  }
  cout << sum << ln;


  return 0;
}

