#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  int n, a, mod;
  cin >> n >> a;
  if(n < 500) {
    if(a >= n){
      cout << "Yes" << endl;
      return 0;
    }
  }
  mod = n%500;
  if(a == 0 && mod == 0) cout << "Yes" << endl;
  else if(a-mod >= 0) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
