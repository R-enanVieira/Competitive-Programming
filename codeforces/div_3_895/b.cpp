#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    map<int, int> traps;
    int ans =0;
    while(n--){
      int d, s; cin >> d >> s;
      if(traps.find(d) != traps.end()){
        if(traps[d] > s) traps[d] = s;
      } else {
        traps[d] = s;
      }
      auto it = traps.begin();
//      if(!(it->second & 1) || it->first == 1) it->second-=1;
      if(!(it->second & 1)) ans = it->first + (it->second/2)-1;
      else ans = it->first + (it->second/2);
      for (int i = it->first+1; i <= ans; i++) {
        if(traps.find(i) != traps.end()) {
          int aux = i + (traps[i]/2);
          if(aux < ans) ans = aux;
        }
      }
    }
    cout << (ans ? ans : 1) << ln;
  }

  return 0;
}
// revolva usando a formula e pegando o min
