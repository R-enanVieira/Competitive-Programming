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
  while(t--){
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
      int input;
      cin >> input;
      sum += input;
    }
    cout << (sum%2 == 0 ? "Yes":"No");
    cout << endl;
  }

  return 0;
}

