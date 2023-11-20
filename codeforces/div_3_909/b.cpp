#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

void solve() {
  int n; cin >> n;
  vector<long long int> v(n);
 
  for(auto&x : v) 
    cin >> x;

  ll ans = 0;
  auto min = min_element(v.begin(), v.end());
  auto max = max_element(v.begin(), v.end());
  ans = *max - *min; 
  if(!ans) {
    cout << ans << ln;
    return;
  }
  for(int i = 1; i < n; i++) {
    ll sum = 0, k = 0;
    if(!(n%i)){
      vector<long long int> aux(n/i);
      for(int j = 0; j < n; j++) {
        sum += v[j];
        if(!((j+1)%i)) {
          aux[k++] = sum;
          sum = 0;
        }
      }
      min = min_element(aux.begin(), aux.end());
      max = max_element(aux.begin(), aux.end());

      ans = ((*max-*min) > ans ? *max-*min : ans);
      
    }
  }

  cout << ans << ln;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while(t--) {
    solve();    
  }

  return 0;
}


