#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
  ios::sync_with_stdio(false);
  cin >> n;

  vector<int> a;
  for(int i = 0; i < n; i++){
    int input;
    cin >> input;
    a.push_back(input);
  }

  for(int i = 0; i < n-1; i++){
    cout << a[i] << " ";
    if(a[i] < a[i+1]) {
      for(int j = a[i]+1; j < a[i+1]; j++){
        cout << j << " ";
      }
    } else {
      for(int j = a[i]-1; j > a[i+1]; j--){
        cout << j << " ";
      }
    }
  }
  cout << a.back() << endl;
  return 0;
}
