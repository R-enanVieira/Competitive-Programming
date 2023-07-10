#include <bits/stdc++.h>
using namespace std;

int n;
string s;
bool flag = 0;

int main(){
  cin >> n;
  cin >> s;
  if(n>1 && n%2 == 0){
    for(int i = 0; i < (n/2); i++)
      if(s[i] != s[(n/2)+i]) flag = 1;
    if(flag) cout << "No" << endl;
    else cout << "Yes" << endl;
  }else {
    cout << "No" << endl;
    return 0;
  }
}

