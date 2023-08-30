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
  set<int> order;
  for(int i = 0; i < n; i++) {
    int input;
    cin >> input;
    order.insert(input);
  }
  
  auto it = order.begin();
  
  if(order.size() > 1) cout << *(++it);
  else cout << "NO";
  cout << endl;

  return 0;
}

