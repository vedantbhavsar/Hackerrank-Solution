#include <bits/stdc++.h>

using namespace std;

// Complete the commonChild function below.

int commonChild(string s1, string s2) {

    int m,n;
    m = s1.length();
    n = s2.length();
    
    static int c[5001][5001];
    for(int i=0; i<=m; i++){
        for(int j=0; j<=n; j++){
            c[i][j] = 0;
        }
    }   

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            
            if(s1[i-1] == s2[j-1])
                c[i][j] = c[i-1][j-1] + 1;
            else
                c[i][j] = max(c[i][j-1],c[i-1][j]);
        }
    }

    return c[m][n];

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = commonChild(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
