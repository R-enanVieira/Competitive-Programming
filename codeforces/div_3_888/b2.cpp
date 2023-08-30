#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    auto b = a;
    sort(b.begin(), b.end());
    bool flag = true;
    for(int i = 0; i < n; i++){
      flag &= (a[i]%2 == b[i]%2);
    }
    cout << (flag ? "yes" : "no") << endl;
  }
  return 0;
}
