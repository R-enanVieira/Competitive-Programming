#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, k;
  cin >> n >> k;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  int maior = a[k-1];
  int ans = 0;
  for(int i = 0; i < n; i++){
    if(a[i] >= maior && a[i]!=0) ans++;
  }
  cout << ans << endl;
  return 0;
}
