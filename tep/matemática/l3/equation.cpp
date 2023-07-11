#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

double a, b, c, delta;
double roots[2], root;

int main() {
  ios::sync_with_stdio(false);
  
  cin >> a >> b >> c;
  
  if(a == 0 && b==0 && c==0){
    cout << "-1" << endl;
    return 0;
  } else if (a == 0 && b == 0) {
    cout << "0" << endl;
    return 0;
  } 
  else if(a == 0) {
    cout << "1" << endl << fixed << setprecision(5) << -c/b << endl;
    return 0;
  }

  delta = b*b - 4*a*c;
  
  

  if(delta < 0) { 
    cout << "0" << endl;
  }
  else if(delta == 0) {
    root = -b/(2.0*a);
    cout << "1" << endl << fixed << setprecision(5) << root << endl;
  }
  else {
    roots[0] = (-b-sqrt(delta))/(2.0*a);
    roots[1] = (-b+sqrt(delta))/(2.0*a);
    sort(roots, roots+2);
    cout << "2" << endl; 
    cout << fixed << setprecision(5) << roots[0] << endl;
  
    cout << fixed << setprecision(5)<< roots[1] << endl;
  }

}
