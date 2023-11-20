#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

using ll = long long;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

vector<ii> dir = {(0, 1), (1, 0), (1,1), (0, -1), (-1, 0), (-1,-1), (-1, 1), (1,-1)};
int chessboard[][] {
  {
  // a  b  c  d  e  f  g  h
    {0, 1, 0, 0, 0, 0, 0, 0}, //1
    {1, 0, 1, 1, 1, 1, 1, 1}, //2
    {1, 1, 0, 1, 1, 1, 1, 1}, //3
    {1, 1, 1, 0, 1, 1, 1, 1}, //4
    {1, 1, 1, 1, 0, 1, 1, 1}, //5
    {1, 1, 1, 1, 1, 0, 1, 1}, //6
    {1, 1, 1, 1, 1, 1, 0, 1}, //7
    {1, 1, 1, 1, 1, 1, 1, 0}, //8
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
   

  return 0;
}

