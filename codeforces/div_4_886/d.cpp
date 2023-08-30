#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  long long t, n, k, ans;
  cin >> t;
  while(t--) {
    cin >> n >> k;
    long long a[n];
    for(int i = 0; i < n; i++) {
      if(i > 0) {
        cin >> a[i];
        if(abs(a[i]-a[i-1]) > k) {
          ans +=1
        }
      }
    }
  }
  

  return 0;
}

