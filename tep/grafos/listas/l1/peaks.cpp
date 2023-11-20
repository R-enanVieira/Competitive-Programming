#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m; cin >> n >> m;
  bool ans[n+1]; 

  int h[n+1];
  for (int i = 1; i <= n; i++)
    {cin >> h[i]; ans[i] = 1;}  
  
  while(m--){
    int a, b; cin >> a >> b;
    ans[a] &= h[a] > h[b];
    ans[b] &= h[b] > h[a];
  }

  int res = 0; 
  for (int i = 1; i <= n; i++) {
    if(ans[i]) res++;
  }
  
  cout << res << ln;

  return 0;
}

