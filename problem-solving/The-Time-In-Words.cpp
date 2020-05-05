#include <bits/stdc++.h>

using namespace std;

// Complete the timeInWords function below.
string timeInWords(int h, int m) {

    string s[21] = {"",        "one",     "two",       "three",    "four",
                "five",    "six",     "seven",     "eight",    "nine",
                "ten",     "eleven",  "twelve",    "thirteen", "fourteen",
                "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
                "twenty"};

    string op;
    if(m == 0){
        op = s[h] + " o' clock";
        return op;
    }
    else if(m < 15){
        if(m==1){
            op = s[m] + " minute" + "" + " past " + s[h];
            return op;
        }
        else{
            op = s[m] + " minute" + "s" + " past " + s[h];
            return op;
        }
    }
    else if(m == 15){
        op = "quarter past " + s[h];
        return op;
    }
    else if(m <= 20){
        op = s[m] + " minutes past " + s[h];
        return op;
    }
    else if(m < 30){
        op = "twenty " + s[m - 20] + " minutes past " + s[h];
        return op;
    }
    else if(m == 30){
        op = "half past " + s[h];
        return op;
    }
    else if(m < 40){
        op = "twenty " + s[40 - m] + " minutes to " + s[h+1];
        return op;
    }
    else if(m < 45){
        op = s[60 - m] + " minutes to " + s[h + 1];
        return op;
    }
    else if(m == 45){
        op = "quarter to " + s[h + 1];
        return op;
    }
    else{
        op = s[60 - m] + " minute" + (m == 59 ? "" : "s") + " to " + s[h + 1];
        if(m == 59){
            op = s[60 - m] + " minute" + "" + " to " + s[h + 1];
            return op;
        }
        else{
            op = s[60 - m] + " minute" + "s" + " to " + s[h + 1];
            return op;
        }
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
