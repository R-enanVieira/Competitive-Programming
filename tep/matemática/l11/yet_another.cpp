#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  int t;
  cin >> t;
  while(t--){
    int a, b;
    cin >> a >> b;
    if(a == b) {cout << 0 << endl; continue;}
    if(a < b) {
      if(abs(a-b) >= 10) {
        if((abs(a-b))%10 == 0) {cout << abs(a-b)/10 << endl; continue;}
        else {cout << (abs(a-b)/10)+1 << endl; continue;}
      }
      else {cout << 1 << endl; continue;} 
    }
    else {
     if(abs(a-b) >= 10) {
        if((a-b)%10 == 0) {cout << (a-b)/10 << endl; continue;}
        else {cout << ((a-b)/10)+1 << endl; continue;}
      }
      else {cout << 1 << endl; continue;}  
    }
  }
  return 0;
}
