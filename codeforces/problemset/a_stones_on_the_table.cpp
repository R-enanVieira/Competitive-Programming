#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, ans=0; string s; cin >> n >> s;
  for (int i = 0; i < s.size(); i++) {
    if(i > 0 && s[i]==s[i-1]) ans++; 
  }
  cout << ans << ln;
  return 0;
}

