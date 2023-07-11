#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int n;
  cin >> n >> s;

  for(int i=0; i < s.size(); i++) {
    if(n+s[i] > 90) {
      if(n < 26) printf("%c", (s[i]-26)+n);
      else if(n%26 == 0) cout << s[i];
      else printf("%c", s[i]+(n%26));
    } 
    else {
      printf("%c", s[i]+n);
    }
  }
  cout << endl;
  return 0;
}
