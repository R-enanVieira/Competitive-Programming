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
  vector<string> w = {"Sunny", "Cloudy", "Rainy"};
  string s; cin >> s;

  for (int i = 0; i < w.size(); i++) {
    if(s == w[i] && i == 2) cout << w[0] << ln;
    else if(s == w[i]) cout << w[i+1] << ln;
  }

  return 0;
}

