#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s1, s2; cin >> s1 >> s2;
  int ans=0;
  for (int i = 0; i < s1.size(); i++) {
    if(s1[i] <= 'Z') s1[i] += 32;
    if(s2[i] <= 'Z') s2[i] += 32;
    if(s1[i] != s2[i]) {
      if(s1[i] < s2[i]) {ans = -1; break;}
      else if(s2[i] < s1[i]){ans = 1; break;}
    }
  }
  if(!ans) {cout << ans << ln;}
  else {cout << ans << ln;}


  return 0;
}

