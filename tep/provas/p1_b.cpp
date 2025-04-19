#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ii pair<int, int>
#define ln "\n"

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> mult(n);

  for (auto &line : mult)
    cin >> line;

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      if (mult[i][j] == 'W')
        return cout << i + 1 << " " << j + 1 << ln, 0;
  return 0;
}
