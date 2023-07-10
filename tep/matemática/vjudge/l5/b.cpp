#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  long long a, b, x;
  cin >> a >> b >> x;
  long long mult = b/x;
  if(a == 0) cout << mult+1 << endl;
  else cout << mult-((a-1)/x) << endl;

  return 0;
}
