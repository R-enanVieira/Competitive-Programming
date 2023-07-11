#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, d, cont=0;
  cin >> n >> d;
  int b[n];

  for(int i = 0; i < n; i++) {
    cin >> b[i];
  }

  for(int i = 0; i < n-1; i++) {
    if(b[i] == b[i+1]){
      b[i+1] += d;
      cont++;
    } else if(b[i] > b[i+1]) {
      int dif = (b[i] - b[i+1]) + 1;
      if(dif <= d) {b[i+1] += d; cont++;}
      else {
        if(dif%d == 0) {b[i+1] += dif; cont += dif/d;}
        else {b[i+1] += ((dif/d)*d)+d; cont += (dif/d)+1;}
      }
    }
  }

  cout << cont << endl;

  return 0;
}

