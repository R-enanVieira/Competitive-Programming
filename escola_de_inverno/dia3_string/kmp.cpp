#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int nxt(string& p, vector<int> &nbor, int lider, char c) {
  while (lider != -1) {
    if(c == p[lider+1]) {
      lider++;
      break;
    } else {
      lider = nbor[lider];
    } 
  }
  if (lider == -1 and p[0] == c) {
    lider++;
  }
}

vector<int> kmp(string s) {
  int n = s.size();
  vector<int> nbor(s.size());

  //-1 primeiro estado do automato
  nbor[0] = -1;
  for (int i = 1; i < n; i++) {
    nbor[i] = nbor[i-1];
    nbor[i] = nxt(s, nbor, nbor[i], s[i]);
  }
  return nbor;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s, p; cin >> s >> p;

  vector<int> nbor = kmp(p);
  int lider -1;

  for (int i = 0; i < (int)s.size(); i++) {
    
  }

  return 0;
}

