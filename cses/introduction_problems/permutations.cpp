#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  if(n == 1) {cout << 1;}
  else if(n < 4) {cout << "NO SOLUTION";}
  else {
    int j=1, k=2;
    for(int i = 1; i <= n; i++) {
      if(k <= n) {cout << k << " "; k+=2;}
      else {cout << j << " "; j+=2;}
    }
  }
  cout << endl;
  return 0;
}

