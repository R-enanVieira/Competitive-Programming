#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  int t, n, maior  = -1;
  int a[50], b[50];

  cin >> t;

  while(t--) {
    cin >> n;
    maior = -1;
    for(int i = 0; i<n; i++){
      if(i > 0){
        cin >> a[i] >> b[i];
        if(maior == -1) { 
          if(a[i] <= 10) maior = i;
        } else if(b[i] > b[maior]){
          if(a[i] <= 10) maior = i;
        }
      } else {
        cin >> a[i] >> b[i];
        if(a[i] <= 10) maior = i;
      }
    }

    cout << maior+1 << endl;
  }

  return 0;
}
