#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  map<string, string> d;
  for (int i = 0; i < n; i++) {
    string k, v;
    cin >> k;
    getline(cin, v);
    d[k] = v;
    cout << v << ln;
  }
  for (const auto &p : d) {
    std::cout << p.first << "=" << p.second << '\n';
  }
 
  
  /*for (int i = 0; i < m; i++) {
    string s;
    getline(cin, s);
    char w[31];
    int j = 0;
    for (int i = 0; i < s.size(); i++) {
      if(s[i] != ' ' && i != s.size()-1) {w[j++] = s[i];}
      else if(i == s.size()-1){
        w[j++] = s[i];
        w[j] = '\0';
        if(d.count(w)) cout << d[w] << " ";
        else cout << w << " ";
      }else{
        w[j] = '\0';
        if(d.count(w)) cout << d[w] << " ";
        else cout << w << " ";
        j=0;
      } 
    }
    cout << ln;
  }*/


  return 0;
}

