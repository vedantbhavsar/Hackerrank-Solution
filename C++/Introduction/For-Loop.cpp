#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.

    int i,a,b;
    cin >> a >> b;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

        for(int i = a; i <= b; i++) {
        
            if(i > 9) {
                if(i % 2 == 0)
                    cout << "even" << endl;
                else
                    cout << "odd" << endl;
            }
            else {
                cout << arr[i] << endl;
            }
        }

    return 0;
}
