#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  int r, g, b, min = 30;
  
  cin >> r >> g >> b;
  if(r > 1) r -= 2;
  else if(r == 1) r -= 1;
  
  while(r != 0 || g != 0 || b != 0) {
    
    if(g > 1) {g -= 2; min += 1;}
    else if(g == 1) {g-= 1; min += 1;}
    else {min += 1;}
    
    if(r == 0 && g == 0 && b == 0) break;
    
    if(b > 1) {b -= 2; min += 1;}
    else if(b == 1) {b -= 1; min += 1;}
    else {min += 1;}
    
    if(r == 0 && g == 0 && b == 0) break;
    
    if(r > 1) {r -= 2; min += 1;}
    else if(r == 1) {r--; min += 1;}
    else{min += 1;}
  }
  cout << min << endl;

  return 0;
}
