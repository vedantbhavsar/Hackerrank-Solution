#include <bits/stdc++.h>

using namespace std;

// Complete the palindromeIndex function below.
bool ispalin(string str)
{
    int i = 0, j = str.length() - 1;
    while (i < j)
    {
        if (str[i] != str[j])
            return false;
        
        i++, j--;
    }
    return true;
}

int palindromeIndex(string s) {

    int i = 0, j = s.length() - 1;  //aaab j=3  //baa j=2   //aaa j=2
    int ans = -1;
    while (i < j && s[i] == s[j])//false //false //true
        i++, j--;

    if (i < j)  //i=0,1,2,3 j=3   //i=0,1 j=2   //i=1 j=1 making condition false
    {
        string str1 = s.substr(0, i) + s.substr(i + 1, s.length() - i - 1);
        if (ispalin(str1))//aa, aaa, aa   //a false, ba false
            ans = i;    //1, 2, 3
        
        string str2 = s.substr(0, j) + s.substr(j + 1, s.length() - j - 1);
        if (ispalin(str2))//....    //baab false/ baab true
            ans = j; //0
    }

    return ans; // when palindrome return -1

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

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
