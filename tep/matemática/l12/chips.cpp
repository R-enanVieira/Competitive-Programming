#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  int n, m, aux, i = 1;
  cin >> n >> m;
  aux = n;
  while(1) {
    if(i > aux) i = 1;
    if(m-i  < 0) break;
    m -= i;
    i++;
  }
  cout << m << endl;
  return 0;
}
