#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin >> s;

  vector<string> cases = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};

  for(int i = 0; i < cases.size(); i++){
    for (int j = 0; j < cases.size(); j++) {
      if(s == cases[j]) {cout << "Yes" << endl; return 0;}
    }
  }
  cout << "No" << endl;
  return 0;
}

