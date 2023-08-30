#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, h, x;
  cin >> n >> h >> x;
  set<int> l;
  while (n--) {
    int input;
    cin >> input;
    l.insert(input);
  }
  
  auto it = l.lower_bound(x-h);
  int k = 1;
  for(auto x: l) {
    if(x == *it) cout << k << ln;
    k++;
  }
 

  return 0;
}

