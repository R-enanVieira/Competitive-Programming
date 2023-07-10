#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
  ios::sync_with_stdio(false);
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int maior = a[0], sum = 0;

  for(int i = 1; i < n; i++) {
    if(a[i] > maior) maior = a[i];
  }

  for(int i = 0; i < n; i++) {
    sum += (maior - a[i]);
  }
  cout << sum << endl;
  
  return 0;
}
