#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;

    map<string, int> m;
    for(int i=0; i<q; i++){

        string name = "";
        int marks = 0;
        int qt = 0;
        cin >> qt;

        if(qt == 1){

            cin >> name >> marks;
            map<string, int>::iterator itr = m.find(name);
            
            if(itr != m.end()){ 
                int val = itr->second;
                val = val + marks;
                itr->second = val;
            }
            else
                m.insert(make_pair(name, marks));

        }
        else if(qt == 3){
            cin >> name;
            map<string, int>::iterator itr = m.find(name);
            if(itr == m.end())
                cout << 0 << endl;
            else
                cout << m[name] << endl;
        }
        else{
            cin >> name;
            m.erase(name);
        }

    }


    return 0;
}
