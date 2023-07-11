#include <bits/stdc++.h>
using namespace std;
using ll = long long;

long long binpow(long long a, long long b)
{
  long long res = 1;
  while (b > 0)
  {
    if (b & 1)
      res = res * a;
    a = a * a;
    b >>= 1;
  }
  return res;
}

int main() {
  ios::sync_with_stdio(false);
  int n, maior;
  cin >> n;
  ll x, a[n];
  
  for(int i  = 0; i < n; i++) {
    cin >> a[i];
    if(i == 0) maior = a[i];
    else if(a[i] > maior) maior = a[i];
  }
  ll max = binpow(2,maior);
  int i = 1;
  while()

  
  cout << (n/2)+n << endl;
  return 0;
}


