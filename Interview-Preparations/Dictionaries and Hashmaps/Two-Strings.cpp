#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
const int max_char = 26;
string twoStrings(string s1, string s2) {

    vector<bool> v(max_char, 0);

    for(int i=0; i<s1.length(); i++)
        v[s1[i] - 'a'] = true;

    for(int i=0; i<s2.length(); i++){
        if(v[s2[i] - 'a'])
            return "YES";
    }
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
