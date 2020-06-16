#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin >> a >> b;
    
    int x = a.size();
    int y = b.size();
    
    cout << x << " " << y << endl;

    string c = a + b;
    cout << c << endl;

    string p,q;
    p = a;
    q = b;
    a[0] = q[0];
    b[0] = p[0];

    cout << a << " " << b << endl;
  
    return 0;
}
