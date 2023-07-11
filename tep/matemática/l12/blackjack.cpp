#include <bits/stdc++.h>
using namespace std; 

int main() {
  ios::sync_with_stdio(false);
  int a, b, c;
  cin >> a >> b >> c;
  if((a+b+c) > 21) cout << "bust" << endl;
  else cout << "win" << endl;
  
  return 0;
}
