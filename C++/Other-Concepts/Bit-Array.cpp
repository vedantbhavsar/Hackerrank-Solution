#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned long long n, s, p, q, v;
    n = 100000000; s = 1232077670; p = 126810854; q = 1536183938;

    cin >> n >> s >> p >> q;
    unsigned long long i, a2 = s, a1 = s, b = 0, k = 0;

    v = pow(2,31);
    
    for(i=0; i<n; i++){
        
        a1 = (a1 * p + q);
        a1 = a1 % v;
        
        if((a1 == a2 || a1 == b) && i!=0){
            k = i + 1;
            break;
        }
        
        b = a1;
    }

    if (i == n)
        k = i;

    cout << k << endl;
    return 0;
}
