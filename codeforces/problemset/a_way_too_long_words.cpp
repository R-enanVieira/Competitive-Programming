#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t;
  cin >> t;
  string s;
  while(t--) {
    cin >> s;
    if(s.size() > 10)
      cout << s[0] << (s.size()-2) << s[s.size()-1] << endl;
    else 
      cout << s << endl;
  }

  return 0;
}

