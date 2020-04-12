#include <bits/stdc++.h>

using namespace std;

int c_match_str(unordered_multimap<string, int> &strings, string query) {
  return (int)(strings.count(query));
}

int main() 
{
  int nstr;
  int nqr;
  unordered_multimap<string, int> strings;
  vector<int> results;

  cin >> nstr;

  for (int i = 0; i < nstr; ++i) {
    string tstr;
    cin >> tstr;
    strings.insert(make_pair(tstr, 0));
  }

  cin >> nqr;

  for (int j = 0; j < nqr; ++j) {
    string tmpQuery;
    cin >> tmpQuery;
    results.push_back(c_match_str(strings, tmpQuery));
  }

  for (int k = 0; k < results.size(); ++k) {
    cout << results[k] << "\n";
  }

  return 0;
}

