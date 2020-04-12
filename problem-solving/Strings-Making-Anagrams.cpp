#include <bits/stdc++.h>

using namespace std;
const int chars = 26;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {

    int count1[chars]={0}, count2[chars]={0};
    for(int i=0; a[i]!='\0'; i++)
        count1[a[i]-'a']++;
    for(int i=0; b[i]!='\0'; i++)
        count2[b[i]-'a']++;

    int res=0;
    for(int i=0; i<26; i++)
        res += abs(count1[i]-count2[i]);

    return res;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
