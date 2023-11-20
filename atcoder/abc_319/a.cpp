#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  map<string, int> c = {
    {"tourist", 3858},
    {"ksun48", 3679},
    {"Benq" ,3658},
    {"Um_nik", 3648},
    {"apiad", 3638},
    {"Stonefeang", 3630},
    {"ecnerwala", 3613},
    {"mnbvmar", 3555},
    {"newbiedmy", 3516},
    {"semiexp", 3481}
  };
  string s; cin >> s;
  cout << c[s] << ln;
  return 0;
}

