#include <bits/stdc++.h>

using namespace std;

// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(string s) {

    map<string, int> m;
    for(int i=0; i<s.length(); i++){

        for(int l=1; i+l-1 < s.length(); l++){

            string temp = s.substr(i, l);
            sort(temp.begin(), temp.end());
            m[temp]++;

        }
    }
    int ans = 0;
    for(map<string, int> :: iterator it = m.begin(); it != m.end(); it++){
        ans += (int) (it -> second) * (it -> second - 1) / 2;
    }

    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = sherlockAndAnagrams(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
