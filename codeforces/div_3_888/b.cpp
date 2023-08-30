#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int a[n];
    bool ordenado = 0;
    for (int i = 0; i < n; i++) {
      if(i > 0) {
        cin >> a[i];
        if(a[i-1] < a[i]) ordenado = 1;
      } else {
        cin >> a[i];
      }
    }
    if(!ordenado) {
      cout << "yes" << endl;
      continue;
    }

    int menor;
    for(int i = 0; i < n-1; i++){
      menor = i;
      for(int j = i + 1; j < n; j++){
        if(a[j] < a[menor] && ((a[j]%2 == 0 && a[menor]%2 == 0) || (a[j]%2 != 0 && a[menor]%2 != 0))) menor = j;
      }
      int aux = a[i];
      a[i] = a[menor];
      a[menor] = aux;
      //cout << a[i] << " ";
    }

    bool flag = 0;
    for(int i = 0; i < n; i++){
      if(i > 0){
        if(a[i-1] > a[i]) flag = 1;
      }
    }
    if(flag) cout << "no" << endl;
    else cout << "yes" << endl;
  }
  return 0;

}
