#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {

    int i, count=0, diff=0, l=0, min=0;
    int arr[26] = {0};
    for(i=0; i<s.length(); i++){
        int x = s[i] - 97;
        arr[x]++;
    }
    sort(arr,arr+26);

    for(i=0; i<26; i++){
        if(arr[i] == 0)
            l++;
    }
    if(arr[l] == 1){
        l++;
        count++;
    }

    for(i=l+1; i<26; i++){
        //diff = arr[i] - arr[l];
        if(arr[i] != arr[l]){
            count++;
            
        }
    }
    if(count > 1)
        return "NO";
    else
        return "YES";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
