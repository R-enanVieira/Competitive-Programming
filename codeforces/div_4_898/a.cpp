#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  
  while(t--) {
    string s; cin >> s;
    if(s[0] == 'a' && s[1] == 'b' && s[2] == 'c') cout << "yes" << ln;
    else if(s[0] == 'c' && s[1] == 'b' && s[2] == 'a') cout << "yes" << ln;
    else if(s[0] == 'a' && s[1] == 'c' && s[2] == 'b') cout << "yes" << ln;
    else if(s[0] == 'b' && s[1] == 'a' && s[2] == 'c') cout << "yes" << ln;
    else if(s[0] == 'a' && s[1] == 'c' && s[2] == 'b') cout << "yes" << ln;
    else cout << "no" << ln;

  }



  return 0;
}

