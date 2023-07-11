#include <bits/stdc++.h>
using namespace std; 

int main() {
  ios::sync_with_stdio(false);
  string s;
  int cont = 0;
  cin >> s;
  for(int i = 0; i < s.size()/2; i++) {
    if(s[i] != s[(s.size())-i-1]) cont++;
  }
  cout << cont << endl;
  return 0;
}

