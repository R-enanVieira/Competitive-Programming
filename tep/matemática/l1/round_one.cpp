#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;

	if(a != 1 && b != 1)
		cout << "1" << endl;
	else if(a != 2 && b != 2)
		cout << "2" << endl;
	else if( a != 3 && b != 3)
		cout << "3" << endl;

	return 0;
}
