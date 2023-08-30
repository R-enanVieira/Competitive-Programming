#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  set<int> l;
  while (n--) {
    int input;
    cin >> input;
    l.insert(input);
  }
  auto it = l.begin();
  auto it1 = it++;
  for(int i = 0; i < l.size()-1; i++) {
    if(*it - *it1 > 1) {
      cout << *it1 + 1 << ln;
      return 0;
    }
    it++; it1++;
  }
 

  return 0;
}


