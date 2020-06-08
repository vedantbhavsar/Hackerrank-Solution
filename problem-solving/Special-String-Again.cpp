#include <bits/stdc++.h>

using namespace std;

// Complete the substrCount function below.
long substrCount(int n, string s) {

    long count = n;
    long isc = 0, icc = 0, ipc = 0, ippc = 0;

    for(int i=1; i<n; i++){

        char prev = s[i-1];
        char curr = s[i];

        if(prev == curr){
            icc++;
            count += icc;

            if(isc > 0){
                isc--;
                count++;
            }
        }

        else{
            icc = 0;
            
            if( i>1 && (s[i-2]) == curr){
                isc = ippc;
                count++;
            }
            else
                isc = 0;
        }

        if(i > 1)
            ippc = ipc;

        ipc = icc;

    }
    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    long result = substrCount(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
