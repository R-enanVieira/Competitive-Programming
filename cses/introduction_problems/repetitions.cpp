#include <bits/stdc++.h>
using namespace std;

int main(){

  ios::sync_with_stdio(false);
  
  string dna;
  vector<int> tam;
  cin >> dna;
  int cont = 1;
  for(int i = 1; i < dna.length(); i++) {
    if(dna[i-1] == dna[i]){
      cont++;
    }else {
      tam.push_back(cont);
      cont = 1;
    }
  }
  tam.push_back(cont);
  auto ans = max_element(tam.begin(), tam.end());
  cout << *ans << endl;

  return 0;
}
