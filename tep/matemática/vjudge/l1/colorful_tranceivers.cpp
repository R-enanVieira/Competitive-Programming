#include <iostream>
#include <cstdlib>

using namespace std;

int a, b, c, d;
int main()
{
    ios::sync_with_stdio(false);
    cin >> a >> b >> c >> d;
    
    if(abs(c-a) <= d) {
        cout << "Yes" << endl;
    }
    else if(abs(b-a) <= d && abs(c-b) <= d) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    
    return 0;
}
