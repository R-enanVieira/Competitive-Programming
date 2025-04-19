#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;
const double EPS{1e-9};

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

bool equals(long double a, long double b) { return fabs(a - b) < EPS; }

map<string, string> dirs = {

    {"N", "S"},   {"E", "W"},   {"W", "E"},   {"S", "N"},
    {"NE", "SW"}, {"NW", "SE"}, {"SE", "NW"}, {"SW", "NE"},
};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin >> s;
  cout << dirs[s] << ln;
  return 0;
}
