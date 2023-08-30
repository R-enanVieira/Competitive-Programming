#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int w;
  cin >> w;
  if(w == 2) {cout << "NO" << endl; return 0;}
  //int ans = w/2;
  cout << ((w % 2 == 0) ? "YES" : "NO");
  cout << endl;

  return 0;
}
