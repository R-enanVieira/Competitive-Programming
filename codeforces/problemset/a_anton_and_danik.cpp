#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  string s; cin >> s;
  int a=0, d=0;
  
  for (int i = 0; i < s.size(); i++) {
    if(s[i] == 'A') a++;
    else d++;
  }
  
  if(a>d) cout << "Anton" << ln;
  else if(d>a) cout << "Danik" << ln;
  else cout << "Friendship" << ln;

  return 0;
}

