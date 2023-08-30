#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n; cin >> n;
  for (ll k = 1; k <= n; k++) {
    cout << k*k*(k*k-1)/2 - 4*(k-1)*(k-2) << ln;
  }


  return 0;
}


//Resolver usando principio da Inclusão e Exclusão
//Assumir A como o numero total de maneiras de posicionar 2 cavalos no tabuleiro
//Assumir B como o numero total de maneiras de posicionar 2 cavalos no tabuleiro de tal maneira que eles estão se atacando
//Ans = A-B
//C_k²_2 = (k²_2) = n(n-1)/2 
