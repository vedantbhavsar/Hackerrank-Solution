#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    int row;
    int q;
    cin >> row >> q;
    vector<int> arr[row];
    for(int i = 0; i < row; i++){
        int col;
        cin >> col;
        int element;
        for(int j = 0; j < col; j++){
            cin >> element;
            arr[i].push_back(element);
        }
    }
    
    int x, y;
    for(int i = 0; i < q; i++){
        cin >> x >> y;
        cout << arr[x][y] << endl;
    }
    return 0;
}
