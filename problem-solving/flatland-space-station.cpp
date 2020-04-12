#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the flatlandSpaceStations function below.
int getMax(int l, int r){
    int ans = 0;
    if(r-l == 1)
        return 0;
    
    for(int i=l+1;i<r;i++){
        ans = max(ans,min(i-l , r-i));
    }
    return ans;
}

int flatlandSpaceStations(int n, vector<int> c) {

    sort(c.begin(), c.end());
    int l=0, r=0, ans = c[0];

    for(int i=0; i<c.size(); i++){
        l = c[i-1];
        r = c[i];
        ans = max(ans, getMax(l,r));    //0 0 0 0 0 0
    }
    int maxi = max(ans, n - c[c.size() - 1] - 1);
    return maxi;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);

    int m = stoi(nm[1]);

    string c_temp_temp;
    getline(cin, c_temp_temp);

    vector<string> c_temp = split_string(c_temp_temp);

    vector<int> c(m);

    for (int i = 0; i < m; i++) {
        int c_item = stoi(c_temp[i]);

        c[i] = c_item;
    }

    int result = flatlandSpaceStations(n, c);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
