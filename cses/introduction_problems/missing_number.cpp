#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;

  cin >> n;
  vector<bool> gabarito(n+1);

  for(int i = 1; i <n; i++) {
    int input;
    cin >> input;
    gabarito[input] = 1;
  }

  for(int i = 1; i <= n; i++) {
    if(!gabarito[i]) cout << i << endl;
  }

  return 0;
}
