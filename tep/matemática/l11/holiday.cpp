#include <bits/stdc++.h>
using namespace std;

map<string, int> week = { {"MON", 6}, {"TUE", 5}, {"WED", 4}, {"THU", 3}, {"FRI", 2}, {"SAT", 1}, {"SUN", 7} };
string s;

int main() {
  cin >> s;
  cout << week[s] << endl;
  return 0;
}

