#include <bits/stdc++.h>
using namespace std;

int main(){

  ios::sync_with_stdio(false);
  
  string dna;
  cin >> dna;
  bool flag = false;
  int cont = 1, aux = 0;
  for(int i = 1; i < dna.length(); i++) {
    if(dna[i-1] == dna[i]){
      cont++;
    }else {
      if(cont >= aux) {
        aux = cont;
        cont = 1;
        //flag = true;
      }
    }
  }
  if(cont > aux) cout << cont << endl;
  else cout << aux << endl;

  return 0;
}
