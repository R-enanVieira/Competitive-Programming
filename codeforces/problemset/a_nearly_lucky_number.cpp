#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string n; int f=0, s=0; cin >> n;
  for (int i = 0; i < n.size(); i++) {
    if(n[i] == '4') f++;
    else if(n[i] == '7') s++;
  }

  if(f+s == 4 || f+s == 7) cout << "YES" << ln;
  else cout << "NO" << ln;

  return 0;
}

