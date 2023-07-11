#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
    int n = 4, cont = 0;
    long long s[15];

    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    sort(s, s+n);

    for(int i = 0; i < n; i++) {
        if(s[i] != s[i+1])
            cont++;
    }
    cout << n-cont << endl;
	return 0;
}
