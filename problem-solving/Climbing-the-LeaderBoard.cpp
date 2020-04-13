#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin >> n;   //size of vector
    vector<int> scores(n);
    for (auto& no : scores)
        cin >> no;  //input of scores
    
    vector<int> ranks(n);
    ranks[0] = 1;
    for (size_t i = 1; i < n; ++i) {

        if (scores[i] == scores[i-1]) {
            ranks[i] = ranks[i-1];
            continue;
        }
        ranks[i] = ranks[i-1]+1;
    
    }
    ranks.push_back(ranks[n-1]+1);
    
    cin >> m;   //size of alice's vector
    vector<int> alice(m);
    
    int curr = ranks[n], ci = n-1;
    for (auto& no : alice) {
        cin >> no;  //input of scores of alice
        while(ci >= 0 && no > scores[ci]) {
            --ci;
        }
        if (scores[ci] == no)
            cout << ranks[ci];
        else if (scores[ci] > no)
            cout << ranks[ci]+1;
        else
            cout << 1;
        cout << '\n';
    }
    
    return 0;
}
