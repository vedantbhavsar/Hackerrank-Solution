#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    cin >> n;
    set<int> s;

    for(int i=0; i<n; i++){
        
        int q = 0, x = 0;
        cin >> q >> x;

        if(q == 1)
            s.insert(x);
        else if(q == 2)
            s.erase(x);
        else{

            set<int>::iterator itr = s.find(x);
            if(itr == s.end())
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
     
        }
    
    }
    return 0;
}



