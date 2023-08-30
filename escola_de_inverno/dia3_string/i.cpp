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
  while(t--) {
    int n, k; cin >> n >> k;
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    int soma=0;
    for (int i = 0; i < k; i++) {
      auto max = max_element(b.begin(), b.end());
      int ma = *max;
      *max -= *max;
      max = max_element(b.begin(), b.end());
      *max += ma; 
    }
    cout << *max_element(b.begin(), b.end())-*min_element(b.begin(), b.end()) << ln;
    b.clear();
  }

  return 0;
}

