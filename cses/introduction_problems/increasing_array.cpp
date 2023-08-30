#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  long long n, ans=0;
  cin >> n;
  
  long long array[n];
  for(int i = 0; i < n; i++) {
    if(i > 0){
      cin >> array[i];
      if(array[i] < array[i-1]) {ans += array[i-1]-array[i]; array[i]+=array[i-1]-array[i];}
    } else {cin >> array[i];}
  }

  cout << ans << endl;
  return 0;
}

