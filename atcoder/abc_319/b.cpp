#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  string s;
  for (int i = 0; i <= n; i++) {
    int flag = 0;
    for(int j = 1; j < 10; j++) {
      if(!(n%j) && !(i%(n/j))) {
        cout << j;
        flag = 1;
        break;
      }
    }
    if(!flag) cout << '-';    
  }
  cout << ln;

  return 0;
}

