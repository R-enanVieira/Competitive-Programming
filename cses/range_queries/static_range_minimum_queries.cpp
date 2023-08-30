#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef vector<int> vi;
#define pb push_back
#define ln "\n"

const int MAXN = 2*1e5;
const int INF = 1e9-1;

int v[MAXN];
int t[4*MAXN];

void build(int id, int il, int ir) {
  if(il == ir) {
    t[id] = v[il];
    return;
  }
  int im = (il+ir)/2; // achando o meio do nosso vetor
  build(2*id, il, im);
  build(2*id+1, im+1, ir);
  t[id] = min(t[2*id], t[2*id+1]);
}

int query(int l, int r, int id, int il, int ir) {
  if(l <= il && ir <= r) return t[id];
  if(r < il || ir < l) return INF;
  
  int im  = (il+ir)/2;
  int left = query(l, r, 2*id, il, im);
  int right = query(l, r, 2*id+1, im+1, ir);
  return min(left, right);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, q; cin >> n >> q;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  build(1, 0, n-1);
  while(q--) {
    int l, r; cin >> l >> r; l--; r--;
    cout << query(l, r, 1, 0, n-1) << ln;
  }

  return 0;
}

