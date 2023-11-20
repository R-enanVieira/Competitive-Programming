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
  vi v(n);
  vector<bool> vs(n,false);
 
  for(auto&x : v) 
    cin >> x;
  
  for (int i = 0; i < n; i++) 
    if(v[i]&1) vs[i] = true;
  
  ll ans = -1000000;
  for(int j = 0; j < n; j++) {
    int k = 1;
    vector<long long int> ps(n);
    ps[0] = v[j];
    ans = (ps[0] > ans ? ps[0] : ans);
    for (int i = j+1; i < n; i++) {
      if(vs[i] != vs[i-1])
        ps[k] = ps[i-1] + v[i];
      else 
        ps[k] = v[i];
      k++;
    }
    for(auto x : ps)
      cout << x << " ";
    cout << ln;
    ans = (ans > *max_element(ps.begin(), ps.end()) ? ans : *max_element(ps.begin(), ps.end()));
  }
  cout << ans << ln;
  /*
  for (int i = 0; i < n; i++) {
    ans = (ans > v[i] ? ans : v[i]);
    ll temp = 0;
    for(int j = i; vs[j] != v[j+1] && j < n; j++) {
      temp += v[j];
    }
    ans = (ans > temp ? ans : temp);
  }
  
  cout << ans << ln;*/
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



