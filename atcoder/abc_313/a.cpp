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

  vi v(n);
  int maior;

  for(int i = 0; i < n; i++) {
    if(i > 0) {
      cin >> v[i];
      if(v[maior] <= v[i]) maior = i;
    } else {
      cin >> v[i];
      maior = i;
    }
  }

  auto max = max_element(v.begin(), v.end());
  if (maior == 0) {
    cout << "0" << endl;
    return 0;
  }
  cout << (v[0]<=*max ? *max-v[0]+1 : 0);
  cout << endl;
  return 0;
}

