#include <bits/stdc++.h>
using namespace std; 

int main() {
  ios::sync_with_stdio(false);
  string s1, s2;
  int tam, j = 0;
  cin >> s1 >> s2;
  tam = s1.size() + s2.size();
  for(int i = 0; i < tam; i++) {
    if(i < s2.size()) cout << s2[i];
    else cout << s1[j++];
  }
  cout << endl;
  return 0;
}


