#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;

  string s;
  bool a = false, b = false, c = false;
  int i;

  cin >> s;
  for(i = 0; i < s.size(); i++){
    if(s[i] == 'A') a = true;
    else if(s[i] == 'B') b = true;
    else if(s[i] == 'C') c = true;

    if(a && b && c) break;
  }

  cout << i+1 << endl;
  return 0;
}

