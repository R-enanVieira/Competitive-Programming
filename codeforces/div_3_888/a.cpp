#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, n, m, k, h;
  int ans = 0;

  cin >> t;
  
  while(t--) {
    ans = 0;
    cin >> n >> m >> k >> h;
    int p[n];
    int dif[n];
    for(int i = 0; i < n; i++){
      cin >> p[i];
      dif[i] = abs(p[i]-h);
    }
    int max = ((k*m)-k);
    for(int i = 0; i < n; i++) {
      if(dif[i] <= max && dif[i]%k == 0 && dif[i] != 0) {
        ans++;
      } 
    }
    cout << ans << endl;
  }


  return 0;
}
