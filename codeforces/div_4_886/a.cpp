#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  int t, a, b, c;
  cin >> t;
  while(t--){
    cin >> a >> b >> c;
    //ab,ac,bc
    if(a+b >= 10) cout << "yes" << endl;
    else if(a+c >= 10) cout << "yes" << endl;
    else if(b+c >= 10) cout << "yes" << endl;
    else cout << "NO" << endl;
  }

  return 0;
}
