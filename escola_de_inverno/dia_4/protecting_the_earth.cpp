#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

ll n;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 1; i <= 10000; i++) {
    long  double area = 3.14*i*i;
    ll a = round(area);
    if(round(area) >= n) {
      cout <<  i << ln;
      break;
    }
  }

  return 0;
}

