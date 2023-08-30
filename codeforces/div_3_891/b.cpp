#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
typedef vector<int> vi;
#define pb push_back
 
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
 
  while(t--) {
    string s;
    cin >> s;
    bool flag = 0;
    int v[s.size()];
    for(int i = 0; i < s.size(); i++) {
      v[i] = s[i]-'0';
      if(v[i] >= 5) flag = 1;
    }
    if(flag){
    for(int i = s.size()-1; i >= 0; i--) {
      if(i >= 1) {
        if(v[i] >= 5){
          v[i-1] += 1;
          v[i] = 0;
          for (int j = i+1; j < s.size(); j++) {
            v[j] = 0;
          }
        } 
      } else {
        if(v[i] >= 5) {
          v[i] += 10-v[i];
          for (int j = i+1; j < s.size(); j++) {
            v[j] = 0;
          }
        }
      }
    }
    }
    for (int i = 0; i < s.size(); i++) {
      cout << v[i];
    }
    cout << endl;
  }
  return 0;
}
