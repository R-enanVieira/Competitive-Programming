#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9; 

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  char s[101], t[101]; scanf("%s %s", s, t);
  char px[101], sx[101];
  for (int i = 0; i < n; i++) {
    px[i] = t[i];
    sx[i] = t[i+(m-n)];
  }

  px[n] = '\0';
  sx[n] = '\0';

  if(!strcmp(s, px) && !strcmp(s, sx)) cout << 0 << ln;
  else if(!strcmp(s, px) && strcmp(s, sx)) cout << 1 << ln;
  else if(strcmp(s, px) && !strcmp(s, sx)) cout << 2 << ln;
  else if(strcmp(s, px) && strcmp(s, sx)) cout << 3 << ln;
  
  return 0;
}

