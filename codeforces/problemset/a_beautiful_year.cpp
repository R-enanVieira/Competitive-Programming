#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string y; cin >> y;
  int year[4] = {y[0]-'0', y[1]-'0', y[2]-'0', y[3]-'0'};

  while(year[0] < 10) {
    bool ans = 1;
    if(year[3] <= 9) {year[3]++;}
    if(year[2] <= 9 && year[3] == 10) {year[3] = 0; year[2]++;}
    if(year[1] <= 9 && year[2] == 10) {year[2] = 0; year[1]++;}
    if(year[0] <= 9 && year[1] == 10) {year[1] = 0; year[0]++;}
    
    for (int i = 0; i < 3; i++) {
      for (int j = i+1; j < 4; j++) {
        if(year[i] == year[j]) ans = 0;
      }
    }
    if(ans) break;
  }
  for (int i = 0; i < 4; i++) {
    cout << year[i];
  }
  cout << ln;
  return 0;
}

