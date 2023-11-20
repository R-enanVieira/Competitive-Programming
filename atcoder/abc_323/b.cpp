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
  int n; cin >> n;

  vector<ii> v;
  for (int i = 0; i < n; i++) {
    string input; cin >> input;
    v.pb(make_pair(count(input.begin(), input.end(), 'o'), i+1));
  }
  
  for(int i=1; i<n; i++){
    for(int j=i; j>0; j--){
      if(v[j].first > v[j-1].first) {
        ii a = v[j];
        v[j] = v[j-1];
        v[j-1] = a;
      } else if(v[j].first == v[j-1].first && v[j].second < v[j-1].second) {
        ii a = v[j];
        v[j] = v[j-1];
        v[j-1] = a;
      }
    }
  }
  
  for(int i = 0; i < n; i++) {
    if(i != n-1) cout << v[i].second << " ";
    else cout << v[i].second << ln;
  }
  return 0;
}
