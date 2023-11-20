#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  multiset<int> items;
  for (int i = 0; i < n; i++) {
    int input; cin >> input;
    items.emplace((-1)*input);
  }

  while(m) {
    auto maior = (-1)*(*items.begin());
    items.erase(items.begin());
    maior = maior/2;
    items.emplace((-1)*maior);
    
    m--;
  }
  ll sum = 0;
  for (auto i = items.begin(); i != items.end(); i++) {
    sum += *i;
  }
  cout << (-1)*sum << ln; 

  return 0;
}

