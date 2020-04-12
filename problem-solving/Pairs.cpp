#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int pair_count (vector< int >& array, map< int, int >& myMap, int& diff) {
    int result (0);
    for (auto i : array) {
        if (myMap [abs (i + diff)] == 1) { result++; }
    }

    return (result);
}

int main () {
    int size (0), diff (0);
    vector< int > array;
    map< int, int > myMap;

    cin >> size >> diff;
    for (int i = 0; i < size; i++) {
        int key (0);
        cin >> key;

        array.push_back (key);
        myMap [key] = 1;
    }

    cout << pair_count (array, myMap, diff) << endl;
}
