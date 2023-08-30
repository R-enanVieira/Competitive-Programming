#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, menor, maior; cin >> n;
  int v[n];
  for (int i = 0; i < n; i++) {
    if(i > 0) {
      cin >> v[i];
      if(v[i] <= v[menor]) menor = i;
      else if(v[i] > v[maior]) maior = i;
    } else {
      cin >> v[i];
      menor = i;
      maior = i;
    }
  }
  int ans;
  if(maior == n-1) {
    ans = maior + ((n-1)-menor) - 1;
  } else if(menor == 0) {
    ans = maior + ((n-1)-menor) - 1; 
  } else {
    if(maior > menor) ans = maior + ((n-1)-menor)-1; 
    else ans = maior + ((n-1)-menor); 

  }
  cout << ans << ln;
  return 0;
}

