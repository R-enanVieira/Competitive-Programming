#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio();
  long long k, l, cont = 0, aux;

  cin  >> k >> l;
  aux = k;
  if(l == k) {cout << "YES" << endl << cont << endl; return 0;}
  while(1) {
    cont++;
    if(k*aux == l) {
      cout << "YES" << endl << cont << endl;
      return 0;
    }
    aux *= k;
    if(aux > l) break;
  }
  
  cout << "NO" << endl;

  return 0;
}

