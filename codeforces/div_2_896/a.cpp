#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  
  while(t--) {
    int n, cont=0, cont2=0; cin >> n;
    vi a(n+1);
    bool flag = 1;

   int mid = (((n/2)%2) ? ((n/2)+1) : (n/2)); 

    for (int i = 1; i <= n; i++) {
      cin >> a[i];
      if(flag && a[i] != 0) flag = 0;
    }
    if(flag) {
      cout << 0 << ln;
      continue;
    }

    int k = 8, s=a[1];
    while(k--) {
      if(!(n%2)) {
        for (int i = 2; i <= n; i++) {
          s ^= a[i];
          cout << a[i] << ln;
          cout << "resultado parcial xor A: " << s << ln; 
        }
        cout << "RESULTADO FINAL XOR A:  " << s << ln;  
        if(s==0) {
          cont++;
          break;
        } else {
          cont++;
          for (int i = 1; i <= n; i++) {
            a[i] = s;
          }
        }

      } else {
        for (int i = 2; i <= mid; i++) {
          s ^= a[i];
          cout << a[i] << ln;
          cout << "resultado parcial xor B: " << s << ln; 
        } 
        cout << "RESULTADO FINAL XOR B:  " << s << ln;  
        if(s==0) {
          cont++;
          break;
        } else {
          cont++;
          for (int i = 0; i <= mid; i++) {
            a[i] = s;
          }      
        }
      }
    }
    
    if(n%2) {
      s = a[mid];
      while(k--) {
        for (int i = mid+1; i <= n; i++) {
          s ^= a[i];
          cout << a[i] << ln;
          cout << "resultado parcial xor C: " << s << ln; 
        } 
        cout << "RESULTADO FINAL XOR C:  " << s << ln;  
        if(s==0) {
          cont2++;
          break;
        } else {
          cont2++;
          for (int i = mid; i <= n; i++) {
            a[i] = s;
          }      
        }
      }
      cout << cont+cont2 << ln;
      for (int i = 0; i < cont; i++) {
        cout << 1 << " " << mid << ln;
      }
      for (int i = 0; i < cont2; i++) {
        cout << mid << " " << n << ln;
      }
    } else {
      cout << cont << ln;
      for (int i = 0; i < cont; i++) {
        cout << 1 << " " << n << ln;
      }
    }
  }
  return 0;
}

// versão com TLE
// a versão correta é so imprimir 2 para n pares e 4 pra n impar
